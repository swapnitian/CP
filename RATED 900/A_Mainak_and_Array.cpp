#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    long long n ; 
    while(T--){
        cin >> n ;

        vector<int>arr(n) ; 

        for(int i = 0 ; i<n ; i++){
            cin >> arr[i] ;
        }

        // if fix a1 

        int val1 = 0;
        for(int i = 1 ; i < n ; i++){
            val1 = max(val1 , arr[i] - arr[0]) ;
        }

        // locked an
        int val2 =0  ;
        for(int i = 0 ; i < n-1 ; i++){
            val2 = max(val2 , arr[n-1] - arr[i]) ;
        }
        int val3 = 0 ;
        for(int i = n-1 ; i > 0 ;i--){
            val3 = max(arr[i-1] - arr[i] , val3) ;
        }

        cout << max({val1 ,val2 , val3}) << endl;
    }
    return 0 ;
}