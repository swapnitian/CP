#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n ;
        char c ;
        cin >> n >> c ;

        string s ; 
        cin >> s  ;

        s += s ;

        long long g_idx = -1;
        long long ans = 0 ;

        for(int i = 2*n -1 ; i >= 0 ; i--){

            if(s[i] == 'g'){
                g_idx = i ;
                continue; 
            }

            if(s[i] == c){
                ans = max(ans , g_idx-i) ;
            }
        }

        cout << ans << endl;
    }
}