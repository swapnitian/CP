#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n  ;
        cin >> n ;

        
        
        set <int> s ;
        int a ;

        for(int i = 0 ; i < n ; i++){
            cin >> a ;
            s.insert(a) ;
        }

        cout << s.size()*2 - 1 << endl; 

    }
}