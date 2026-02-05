#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n , x ;
        cin >> n >> x ;

        int arr[n] ;
        for(int i = 0 ; i < n ; i++)cin >> arr[i] ;

        long long l = 0 ; long long r = 2e9 + 7 ;
        
        while(l <= r){
            long long mid = l + (r-l)/2 ;
            long long units = 0 ;
            for(int i = 0 ; i < n ; i++){
                units += max(mid-arr[i] , 0LL) ;
            }
            if(units > x){
                r = mid-1;
            }else{
                l = mid+1 ;
            }
        }
        cout << l-1 << endl;
    }
}