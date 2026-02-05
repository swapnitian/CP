#include <bits/stdc++.h>
using namespace std ;
int main()
{
    
    int T ;
    cin >> T ;

    while(T--){

        long long n , k ; 
        cin >> n >> k ;

        long long a[n] , b[n] ;

        long long prev = INT_MIN ;
        long long ans = 0 ;
        long long sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }

        for(int i = 0 ; i < min(n, k) ; i++){      

            sum += a[i] ;
            prev = max(prev , b[i]) ;

            ans = max( ans , sum + (k-i-1)*prev) ;
            
        }

        cout << ans << endl;

    }

}