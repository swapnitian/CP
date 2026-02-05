#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T; 
    cin >> T ;

    while(T--){

        int n , m , p , q  ;
        cin >> n >> m >> p >> q ;

        if(n%p == 0 && n/p * q != m) cout << "NO\n" ; 
        else cout << "YES\n" ;
    }

}
