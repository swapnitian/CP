#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n;

        string s ;
        cin >> s ;

        int open = 0 , close = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                open++;
            }else {
                close++;
            }
        }

        if(close == open) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}