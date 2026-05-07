#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{   
    ll T ;
    cin >> T;

    while(T--){
        ll n ;
        cin >> n;

        vector<ll>arr(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        
            sum += arr[i];
        }
        ll ans = -1;
        ll gcd = 0;
        ll curr_sum = 0;
        for(int i = 0 ; i < n-1 ; i++){
            curr_sum += arr[i];
            gcd = __gcd(curr_sum , sum-curr_sum);
            
            ans = max(ans , gcd);
        }

        cout << ans << endl;
    }
}