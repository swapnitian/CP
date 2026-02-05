#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long a , b , n ;
    
    while(T--){

        
        cin >> a >> b >> n ;
        long long arr[n] ;
        long long  sec = b ;

        for( long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            b = min(1+arr[i] , a) - 1 ;
            sec += b ;
        }

        cout << sec << endl;
    }

}