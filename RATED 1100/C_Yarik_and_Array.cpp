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
        // trying two pointers to solve this let' see this will work ot not 

        long long sum = 0 ;
        long long ans = INT_MIN ;

        int i = 0 , j = 0 ; 

        while(j < n){
            if(sum < 0){
                sum = arr[j] ;
                i = j ;
            }
            if(i < j){
                if((arr[j]^arr[j-1]) & 1){
                    sum += arr[j] ;
                }else{
                    sum = arr[j] ;
                    i = j ; 
                }
            }else{
                sum = arr[j] ;
            }
            ans = max(ans , sum) ;
            j++ ;
        }

        cout << ans << endl;
    }


}