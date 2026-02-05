#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long x , n ;

    while(T--){
        cin >> x >> n ;

        if( x%2 == 0){

            if( n%2 == 1 ){
                
                long long k1 = (n-1)/2 ;

                if(k1%2 == 1){
                    cout << x+n+1 << endl;
                }else{
                    cout << x-n << endl; 
                }

            }else{
                long long k2 = n/2 ;

                if(k2%2 == 1){
                    cout << x+1 << endl;
                }else{
                    cout << x << endl;
                }
            }

        }else{
            if( n%2 == 1 ){
                
                long long k3 = (n-1)/2 ;

                if(k3%2 == 1){
                    cout << x-1-n << endl;
                }else{
                    cout << x+n << endl; 
                }

            }else{
                long long k4 = n/2 ;

                if(k4%2 == 1){
                    cout << x-1 << endl;
                }else{
                    cout << x << endl;
                }
            }
        }


    }
}