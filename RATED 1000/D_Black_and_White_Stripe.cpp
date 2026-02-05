#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int T ;
    cin >> T ; 

    long long n , k ;

    while(T--){

        cin >> n >> k ;

        string s ;
        cin >> s ;

        long long prefix[n+1] = {} ;
        int a = 0; 

        for(int i = 0 ; i < n ; i++){

            if(s[i] == 'W'){
                a += 1 ;
            }
            prefix[i+1] = a ;
        }

        long long ans = INT_MAX ; 
        long long idx = 1 ;
        
        while(k <= n && idx <= k){
            ans = min(ans , prefix[k] - prefix[idx-1]) ;
            k++ ;
            idx++ ;
        }

        cout << ans << endl;

    }
    return 0 ;
}