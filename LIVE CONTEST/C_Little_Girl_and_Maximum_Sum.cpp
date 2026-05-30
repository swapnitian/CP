#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , q;
    cin >> n >> q;

    vector<int> arr(n+1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());

    vector<int> prefix(n+1 , 0);

    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    for(auto it : prefix){
        cout << it << " ";
    }
    cout << endl;
    
    string s = "";
    s.append(n , '1');

    unordered_map<int,int> mp;
    map<pair<int,int>,int> mp2;
    int ans = 0;
    for(int i = 0; i < q; i++){
        int l , r;
        cin >> l >> r;
        
        int sz = r-l + 1;
        
        if(mp2.count({l , r})){
            int st = n-sz;
            
            ans += prefix[n] - prefix[st];
            continue;
        }
        
        if(mp.count(sz)){
            int end = n-mp[sz];
            int st = end-sz;
            
            ans += prefix[end] - prefix[st];
            
        }else{
            int st = n-sz;
            
            ans += prefix[n] - prefix[st];
        }
        mp[sz]++;
        mp2[{l , r}]++;
    }   
    
    for(auto it : mp){
        cout << it.first << " " << it.second ;
        cout << endl;
    }
    // for(auto it : mp2){
    //     cout << it.first.first << " " << it.first.second << ":" << it.second ;
    //     cout << endl;
    // }
    cout << ans << endl;
}