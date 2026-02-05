#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n ;
        cin >> n ;

        int a[n] ;
        int b[n] ;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }

        int ans = 1 ;

        for(int i = 0 ; i < n ; i++){
            ans += max(a[i]-b[i] , 0) ;
        }

        cout << ans << endl;
    }
    return 0 ;
}