#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n ;
        cin >> n ;

        if(n < 10){
            cout << n << endl;
        }else{
            int ans = INT_MAX ;

            while(n > 0){
                ans = min(ans , n%10) ;
                n/= 10 ;
            }

            cout << ans << endl;
        }

    }
}