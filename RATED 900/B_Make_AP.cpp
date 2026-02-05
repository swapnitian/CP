#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long a , b , c ;

    while(T--){
        cin >> a >> b >> c ;
        
        long long new_a = (2*b-c)/a ;
        long long new_b = (c+a)/(2*b) ;
        long long new_c = (2*b-a)/c ;        
        
        bool answer = false ;  

        if(new_a > 0 && (2*b-c)%a == 0){
            answer = true; 
        }

        if(new_b > 0 && (c+a)%(2*b) == 0){
            answer = true ;
        }

        if(new_c > 0 && (2*b-a)%c == 0){
            answer = true ;
        }

        if(answer){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0 ;
}