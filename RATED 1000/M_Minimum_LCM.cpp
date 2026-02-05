#include <bits/stdtr1c++.h>
using namespace std ;
bool checkprimenumber(long long n){

    if(n == 2) return true ;

    for(long long i = 2 ; i*i <=  n ; i++){
        if(n%i == 0) return false ;
    }

    return true ; 
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n ;
        cin >> n ;

        long long a , b ; 

        if(checkprimenumber(n)){
            cout << 1 << " " << n-1 << endl;
        }else if(n%2 == 0){
            a = n/2 ;
            cout << a << " " << a << endl;
        }else{
            
            for(long long i = 3 ; i < n ; i++){

                if(n%i == 0){
                    a = n/i ;
                    b = n-a ;

                    cout << a << " " << b << endl;
                    break ;
                }
            }
        }
    }
    return 0; 
}