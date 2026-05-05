#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll T ;
    cin >> T ;

    while(T--){
        ll n ;
        cin >> n;

        vector<ll>arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        
        vector<ll> v = arr;

        reverse(v.begin()+1 , v.end()); 

        ll x = 1 ; ll ans = 0;

        while(x < n){
            if(v[1] == v[x+1]){
                x++;
                continue;
            }
            ans++;
            x = x*2LL;
        }

        cout << ans << endl;
    }

}