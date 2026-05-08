#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll T ;
    cin >> T;
    
    while(T--){
        ll n , k , a , b;
        cin >> n >> k >> a >> b;

        vector<ll> x(n+1) , y(n+1) ;

        for(ll i = 1; i <=n; i++){
            cin >> x[i] >> y[i];
        }

        ll ans = abs(x[b]-x[a]) + abs(y[b]-y[a]);

        // now to chose atmost two major cities poosilbe

        ll mini1 = 1e18 ; ll mini2 = 1e18;

        for(ll i = 1; i <= k ; i++){
            mini1 = min(abs(x[i]-x[a])+ abs(y[i]-y[a]) , mini1);
            mini2 = min(mini2 , abs(x[i]-x[b])+ abs(y[i]-y[b]));
        }
        ans = min(ans , mini1 + mini2);

        cout << ans << endl;
    }
}