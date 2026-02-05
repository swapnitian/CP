#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    
    while(T--){

        int l , r , d , u  ;
        cin >> l >> r >> d >> u ;

        if(l == r && l == d && l == u){
            cout << "Yes\n" ;
        }else{
            cout << "No\n" ;
        }

    }
}