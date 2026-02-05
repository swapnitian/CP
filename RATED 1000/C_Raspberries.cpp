#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , k ;
        cin >> n >> k ; 
        long long arr[n] ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        long long ans = INT_MAX;
        long long even_c = 0 ;

        for(int i = 0 ; i < n ; i++){

            if(arr[i] % 2 == 0){
                even_c++ ;
            }

            if(arr[i] % k == 0){
                ans = 0 ;
            }

            ans = min(ans , (k - arr[i]%k)) ;
            // k- arr[i]%k ;  to check the no. how much it needed to make the no. to k 
        }

        if(k == 4){

            if(even_c >=2){
                ans = min(0LL , ans) ;
            }else if(even_c == 1){
                ans = min(1LL , ans) ;
            }else if(even_c == 0){
                ans = min(2LL , ans) ;
            }

        }

        cout << ans << "\n" ;
    }
    return 0 ;
}