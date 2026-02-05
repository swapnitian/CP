#include <iostream>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    long long a , b , c ;

    while (T--)
    {
        /* code */
        cin >> a >> b >> c ; 

        if( c % 2 == 0){
            a += c/2 ;
            b += c/2 ;

            if( a > b ){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }else{
            a += c/2 + 1 ;
            b += c/2 ;

            if( a > b ){
                cout << "First" << endl;
            }else{
                cout << "Second" << endl;
            }
        }

        
    }
    return 0 ;  
}