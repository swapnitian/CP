#include <iostream>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    int n ; 
    

    while(T--){
        cin >> n ;
        int a ;

        int odd_freq = 0 ;
        int even_freq = 0 ;

        for( int i = 0 ; i < n ; i++){
            cin >> a ;

            if( a%2 == 0){
                even_freq++;
            }else{
                odd_freq++ ;
            }

        }

        if( n == 2 ){
            if(even_freq == n || odd_freq == n){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if( n > 2 ){

            if( odd_freq % 2 == 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
    return 0 ;
}