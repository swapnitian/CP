#include <iostream>
using namespace std ;  
int main()
{
    int T ;
    cin >> T ;

    int n , a , b ;

    while(T--){
        cin >> n >> a >> b ;


        if( n == a && n == b){
            cout << "Yes" << endl;
        }else if( n-(a+b) >= 2){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}


