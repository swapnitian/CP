#include <iostream>
#include <set>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ;

    int n  , k ; 

    while(T--){
        cin >> n >> k ;

        set <int> s ;
        int a ;
        for( int i = 0 ; i < n ; i++){
            cin >> a ;
            s.insert(a) ;
        }

        if(s.find(k) != s.end()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}