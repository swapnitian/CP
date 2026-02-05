#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n ;

    while(T--){
        cin >> n ;
        string s ;
        cin >> s ;

        int count = 1 , ans = 1 ;

        for( int i = 1 ; i < n ; i++){

            if(s[i] == s[i-1]){
                count++ ;
            }else{
                count=1 ;
            }

            ans = max(ans , count) ;
        }
        
        cout << ans+1 << endl;

    }

}