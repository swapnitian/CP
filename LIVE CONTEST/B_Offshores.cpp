#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n , x , y ;
        cin >> n >> x >> y ;
        
        long long arr[n] ;
        long long total_sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            total_sum += (arr[i]/x)*y ;
        }
        long long ans = 0 ;g
        for(int i = 0 ; i < n ; i++){
            long long curr = (arr[i]/x)*y ;
            long long curr_sum = total_sum - curr + arr[i] ;
            ans = max(ans , curr_sum);
        }
        cout << ans << endl;
    }
}