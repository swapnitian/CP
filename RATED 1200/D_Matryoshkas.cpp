#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll T;
    cin >> T;

    while(T--){`
        ll n;
        cin >> n;

        vector<ll> arr(n);
        map<ll , ll> mp;
        
        for(ll i = 0; i < n; i++){
            cin >> arr[i];

            mp[arr[i]]++;
            
        }
        ll prev = 0;
        ll ans = 0;
        ll last_element = 0;

        for(auto it : mp){

            if(last_element != 1LL*it.first-1LL){
                prev = 0;
            }

            ll freq = mp[it.first];

            ans += max(0LL , freq - prev);

            prev = freq;
            last_element = 1LL*it.first;
        }

        cout << ans << endl;
    }   

}