#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;


    long long n , k ;

    while(T--)
    {
        /* code */
        cin >> n >> k ;

        long long arr[n] ;

        for( long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        long long count = 1 , ans = 1  ;
        sort(arr , arr+n) ;
        
        // here we are using count and reset technique to solve problems- - 

        for(int i = 1 ; i < n ; i++){

            if(arr[i] - arr[i-1] <= k){
                count++ ;
            }else{                
                count = 1 ;
            }
            ans = max(ans , count) ;
        }
        
        cout << n-ans << endl;

    }
    
}