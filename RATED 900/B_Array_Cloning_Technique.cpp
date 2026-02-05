#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ; 

    long long n ;

    while(T--){
        cin >> n ;

        long long arr[n] ;

        for(int i= 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        long long freq = 1 ; 
        sort(arr , arr+n) ; 
        long long count = 0 ;

        for(int i = 1 ; i < n ;i++){
            if(arr[i] == arr[i-1]){
                freq++ ;                
            }else{
                freq = 1 ;
            }
            count = max(count , freq) ;
        }

        if(arr[0] == arr[n-1]){
            cout << 0 << endl;
        }else{
            long long Swap = count ; 
            long long element = n-count ; 
            long long ans = 0 ; 
            
            while(element > 0){

                element = element - Swap ;

                if(element < 0 ){
                    ans += 1 + Swap + element   ;
                }else{
                    ans += 1+Swap ; 
                }
                Swap = 2*Swap ;
            }

            cout << ans << endl;
        }   
    }
}