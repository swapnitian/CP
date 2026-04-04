#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n , c , k;
        cin >> n >> c >> k ;

        vector<long long >arr(n);

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        sort(arr.begin() , arr.end()) ;
        long long  ans = c ;
        // cout << ans << endl;
        for(int i = 0 ; i < n ; i++){
            if(ans >= arr[i] && arr[i] != -1){
                if(k > 0){
                    long long val = min(k , c-arr[i]) ;
                    k = k-val ;
                    arr[i] = arr[i] + val ;
                    ans += arr[i] ;
                    arr[i] = -1 ;
                }else{
                    ans += arr[i] ;
                    arr[i] = -1 ;
                }
            }
        }
        // for(int i = 0 ; i < n ; i++){
        //     if(arr[i] != -1 && ans >= arr[i]){
        //         ans += arr[i] ;
        //     }
        // }
        // for(auto it : arr){
        //     cout << it << " " ;
        // }
        cout << ans << endl;
    }
}