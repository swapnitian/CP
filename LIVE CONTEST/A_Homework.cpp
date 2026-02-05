#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        string a , b , c;
        cin >> a ;
        int m ;
        cin >> m ;

        cin >> b ;
        cin >> c ;

        string help = "" ;

        for(int i = 0 ; i < m ; i++){
            if(c[i] == 'D'){
                a += b[i] ;
            }else{
                help += b[i] ;
            }
        }
        
        int st = 0; int end = help.size()-1;

        while(st < end){
            swap(help[st] , help[end]) ;
            st ++ ; end-- ;
        }
        
        help += a ;

        cout << help << endl;

    }

}