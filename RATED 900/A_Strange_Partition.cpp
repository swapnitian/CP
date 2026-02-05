#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    long long n , x ;

    while(T--){
        cin >> n >> x ; 

        long long arr[n] ;
        long long sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
            sum += arr[i] ;
        }

        long long val = 0 ; 

        if(sum%x == 0){
            val = sum/x ;
        }else{
            val = sum/x + 1 ;
        }   

        long long val2 = 0 ;

        for(int i = 0 ; i < n ; i++){

            if(arr[i]%x == 0){
                val2 += arr[i]/x ;
            }else{
                val2 += arr[i]/x + 1 ;
            }

        }

        cout << min(val , val2) <<  " " << max(val , val2) << endl;

    }
    return 0 ;
}