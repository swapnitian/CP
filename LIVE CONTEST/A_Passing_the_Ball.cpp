#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;
        
        int ans = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            ans++ ;
            if(s[i] == 'L') break ;
        }
        cout << ans << endl;
    }
}
