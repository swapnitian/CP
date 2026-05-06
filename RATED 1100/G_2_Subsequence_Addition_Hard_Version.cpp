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

        vector<ll> arr(n);
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());

        if(arr[0] != 1){
            cout << "NO\n";
        }else{

            ll sum = arr[0];
            bool f1 = true;
            for(int i = 1; i < n; i++){
                if(sum < arr[i]){
                    cout << "NO\n" ;
                    f1 = false;
                    break;
                }

                sum += arr[i];
            }

            if(f1) cout << "YES\n";

        }   

    }
}