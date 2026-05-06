#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n , x ;
        cin >> n >> x;
        
        vector<ll> arr(n);
        ll OR = 0;
        for(int i = 0 ; i < 3 ; i++){ 
            for(int j = 0; j < n; j++){
                cin >> arr[j];
            }

            for(int k = 0; k <n ;k++) {
                if((x|arr[k]) != x){
                    break;
                }

                OR |= arr[k];
            }
        }

        if(OR == x) cout << "YES\n" ;
        else cout << "NO\n";

    }
}