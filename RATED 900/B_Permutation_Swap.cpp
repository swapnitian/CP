#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    while(T--){
        
        long long n ; 
        cin >> n ;

        long long arr[n] ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        long long val = 0 ;

        for( int i = 0 ; i < n ; i++){

            if(arr[i] != i+1){
                val = gcd(val ,abs(arr[i]-1-i) ) ;
            }
        }

        cout << val << endl;
        
    }

}