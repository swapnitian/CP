#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--){
        ll a , b , x;
        cin >> a >> b >> x;

        if(a == b){
            cout << 0 << endl;
            continue;
        }
        vector<pair<ll,ll>>v1 ,v2;

        v1.push_back({a , 0LL});
        v2.push_back({b , 0LL});
        ll cnt = 0;
        while(a > 0){
            cnt++;
            a /= x;
            v1.push_back({a , cnt});
            if(a == 0){
                break;
            }
        }
        cnt = 0;
        while(b > 0){
            cnt++;
            b /= x;
            v2.push_back({b , cnt});
            if(b == 0){
                break;
            }
        }
        ll ans = 1e18;
        for(int i = 0; i < (int)v1.size(); i++){
            for(int j = 0; j < (int)v2.size(); j++){
                ll val = v1[i].second + v2[j].second + abs(v1[i].first - v2[j].first);
                
                ans = min(ans , val);
            }
        }

        cout << ans << endl;
    }
}