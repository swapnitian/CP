#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    ll T ;
    cin >> T ;

    while(T--){
        ll n ;
        cin >> n ;

        vector<ll>arr(n);

        ll d1 = 0 ; ll d2 = 0 ;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            
            if(i&1){
                d2 = __gcd(d2 , arr[i]);
            }else{
                d1 = __gcd(d1 , arr[i]);
            }
        }
        bool f1 = true;
        for(int i = 0 ; i < n; i++){
            if(i&1){
                if(arr[i]%d1 == 0){
                    f1 = false;
                    break;
                }
            }
        }
        if(f1){
            cout << d1 << endl;
            continue;
        }

        f1 = true;
        for(int i = 0 ; i < n; i++){
            if(i%2 == 0){
                if(arr[i]%d2 == 0){
                    f1 = false;
                    break;
                }
            }
        }
        if(f1){
            cout << d2 << endl;
            continue;
        }else{
            cout << 0 << endl;
        }

    }
}