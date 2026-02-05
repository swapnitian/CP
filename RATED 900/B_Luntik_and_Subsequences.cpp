#include <bits/stdc++.h>
using namespace std ; 
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        long long arr[n] ;

        long long  count_0 = 0 ; long long  count_1 = 0 ; 


        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
            
            if(arr[i] == 0){
                count_0++;
            }

            if(arr[i] == 1){
                count_1++;
            }
        }

        long long  ans = pow(2 , count_0)*count_1 ;

        cout << ans << endl;
        
    }
    return 0 ;
}