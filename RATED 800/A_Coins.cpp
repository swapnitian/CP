#include <iostream>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ; 

    long long  n  , k ;

    while(T--){

        cin >> n >> k ;

        if( n%2 == 0){
            cout  << "YES" << endl;
        }else{
            if( k%2 == 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }

    }

    return 0 ;
}