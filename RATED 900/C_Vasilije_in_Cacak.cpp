#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , k , x ; 

        cin >> n >> k >> x ;

        long long minsum = k*(k+1) / 2 ;
        long long maxsum = 0 ;

        while(k > 0){
            
            maxsum += n ;
            n-- ;
            k-- ;
        }

        if( x >= minsum && x <= maxsum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}