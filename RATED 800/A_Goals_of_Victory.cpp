#include <iostream>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ;

    while( T--){
        int n ; 
        cin >> n ;
        int a ;
        long long sum = 0 ;

        while( n-1 > 0){
            cin >> a ;
            sum += a ;
            n-- ;
        }

        cout << -(sum) << endl ;
    }

    return 0 ;
}
