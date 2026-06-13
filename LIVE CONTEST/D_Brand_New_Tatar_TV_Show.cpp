#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--){
        ll n , k;
        cin >> n >> k;

        vector<ll> arr(n);
        map<ll,ll> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];

            mp[arr[i]]++;
        }
        
        bool f1 = false;
        for(auto it : mp){
            if(!(it.second&1)){
                cout << "YES\n";
                f1 = true;
                break;
            }
        }
        if(f1) continue;
        ll prev = 0;
        ll cnt = 0;

        for(auto it : mp){
            if(cnt != 0 && it.first-prev <= k){
                cout << "YES\n";
                f1 = true;
                break;
            }
            prev = it.first;
            cnt++;
        }

        if(!f1) cout << "NO\n";
    }
}