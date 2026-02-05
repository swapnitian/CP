#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    while(T--){

        long long n , k , q ; 
        cin >> n >> k >> q  ;

        long long arr[n] ;
        long long count = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        
            if(arr[i] <= q){
                arr[i] = 1 ;
                count++ ;
            }else{
                arr[i] = 0 ;
            }
        }   
               
        if(count < k){
            cout << 0 << endl;
        }else{

            long long counter = 0 ;
            long long ans = 0 ;

            for(int i = 0 ; i < n ; i++){

                if(arr[i] == 1){
                    counter++ ;
                }else{
                    counter = 0 ;
                }

                if(counter >= k){
                    ans += counter-k+1 ;
                }
            }
            cout << ans << endl;
        }    
    }
    return 0 ;
}