#include <iostream>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;
    int n ;
    while(T--){
        cin >> n ;

        if(n%3 == 1 || n%3 == 2){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }

    return 0 ;
}
