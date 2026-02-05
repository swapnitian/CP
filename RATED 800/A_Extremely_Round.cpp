#include <iostream>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    unsigned long long n ; 

    while(T--){
        
        cin >> n ;
        long long ans ; 
        if( n < 10){
            cout << n << endl;
        }else if( n >= 10 && n < 100){
            ans  = ((int)n/10) ; 
            cout << 9+ans<< endl;
        }else if( n >= 100 && n < 1000 ){
            ans = ((int)n/100)  ;
            cout << 18+ans << endl;
        }else if( n >= 1000 && n < 10000 ){
            ans =((int)n/1000) ;
            cout << 27+ans << endl;
        }else if(n >= 10000 && n < 100000){
            ans = ((int)n/10000) ;
            cout << 36+ans << endl;
        }else if( n >= 100000 && n < 1000000){
            ans = ((int)n/100000) ;
            cout << 45+ans << endl;
        }

    }
}