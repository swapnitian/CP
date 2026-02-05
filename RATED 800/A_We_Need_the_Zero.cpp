#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n ; 
    

    while(T--){
        cin >> n ;
        vector< long long > a(n) , b(n) ;
        
        for(long long  i = 0 ; i < n ; i++){

            cin >> a[i] ;

        }
        int x = 0 ;
        bool check = true ; 
        while( x < 256){
            int ans = a[0]^x ;

            for( long long i = 1 ; i < n ; i++){
                b[i] = a[i]^x ;

                ans = ans^b[i] ;
            }

            if(ans == 0){
                cout << x << endl;
                check = false ;
                break ;
            }

            x++ ;
        }

        if(check){
            cout << -1 << endl;
        }

    }

}