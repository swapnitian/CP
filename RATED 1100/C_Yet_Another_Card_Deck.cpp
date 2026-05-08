#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n , q ;
    cin >> n >> q;  

    vector<int> arr(n);

    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> m;
    for(int i = 0 ; i < n; i++){
        if(m.count(arr[i])){
            continue;
        }
        m[arr[i]] = i+1;
    }
    // for(auto it : m){
    //     cout << m[it.first] << " " << it.second ;
    //     cout << endl;
    // }
    vector<int> ans;
    
    while(q--){
        int t;
        cin >> t;

        ans.push_back(m[t]);

        for(auto it : m){
            
            if(it.first == t){
                int org = m[it.first];
                m[it.first] = 1;

                for(auto it : m){
                    if(it.first == t) continue;

                    if(m[it.first] < org){
                        m[it.first]++;
                    }
                }
            }
        }
    }

    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
}