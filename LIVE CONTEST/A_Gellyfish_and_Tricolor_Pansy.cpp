#include <iostream>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ; 

    long long a , b , c , d ;
    

    while(T--){
        cin >> a >> b >>  c >> d ;

        long long n1 = min(b, d);
        long long n2 = min(a, c);
    
        if (n1 <= n2) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }

    }

    return 0 ;
}