#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n , q ;
    
    while(T--){

        cin >> n >> q ;

        vector<long long> arr(n) ;
        long long old_sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;    
            
            old_sum += arr[i] ;
        }
        
        vector<long long> prefix(n+1 , 0) ;

        for(long long i = 1 ; i < n+1 ; i++){
            prefix[i] = prefix[i-1] + arr[i-1] ;
        }

        long long l , r , k ;
        long long ans = 0 ;

        while(q--){
            cin >> l >> r >> k ;

            ans = prefix[l-1] + ((r-l+1)*k) + (old_sum - prefix[r]) ;
            
            if(ans%2 == 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}