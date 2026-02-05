#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >>T ;

    while(T--){
        

        int x , k ; 
        cin >> x >>  k ;

        bool ans = true ;

        if(x == 1 && k == 2){
            cout << "YES\n" ;
        }else if(k > 1){
            cout << "NO\n" ;
        }else{

            if(x == 1) ans = false ;

            for(int i = 2 ; i*i <= x ; i++){
                if(x%i == 0){
                    ans = false ;
                    break ;
                }
            }
            if(ans) cout << "YES\n" ;
            else cout << "NO\n" ;
        }

        
    }   
}