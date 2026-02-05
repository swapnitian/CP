#include <bits/stdc++.h>
using namespace std ;

long long helper(long long n){

    long long val = n/2 + n/3 + n/5 + n/7 - n/6 - n/21 - n/15 - n/10 - n/14 - n/35 + n/30 + n/42 + n/105 + n/70 - n/210 ;

    return val ;
}

int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long l , r; 
        cin >> l >> r ;

        long long ans = (r-l+1) - helper(r) + helper(l-1) ;
        cout << ans << '\n';
        
    }
    return 0 ;

}