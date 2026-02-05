#include <bits/stdc++.h>
using namespace  std ;
int main()
{
    long long T ;
    cin >> T ;

    while(T--){

        long long n , k , b , s ; 

        cin >> n >> k >> b >> s ;

        long long min_s = k*b ;
        long long max_s = k*b + n*(k-1) ;

        if(s < min_s || s > max_s){
            cout << -1 << endl;
        }else{

            long long ans[n] = {} ;
            ans[0] = min_s ;
            s -= min_s ;

            for(int i = 0 ; i < n ; i++){
                long long add = min(k-1 , s) ;
                ans[i] += add ;
                s -= add ;
            }

            // printing the answer- - 

            for(int i = 0 ; i < n ; i++){
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
    }
    return 0 ;
}