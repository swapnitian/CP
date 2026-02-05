#include <bits/stdc++.h>
using namespace std ;

bool check_prime(long long n){

    if(n == 1) return false ;

    if(n == 2) return true ;

    for(long long  i = 2 ; i*i <= n ; i++){

        if(n%i == 0) return false ;

    }

    return true ;
}
int main()
{
    int T ;
    cin >> T ;

    vector< long long > prime_number ;

    for(long long  i = 2 ; i < 50000 ; i++){
        if(check_prime(i)){
            prime_number.push_back(i) ;
        }
    }

    while(T--){
        long long d ;
        cin >> d ;

        long long v1 ;
        int idx ;

        for(long long  i = 0 ; i < prime_number.size() ; i++){
            if(prime_number[i] >= d+1){
                v1 = prime_number[i] ;
                idx = i ;
                break ;
            }
        }

        long long v2 ;

        for(long long  i = idx+1 ; i < prime_number.size() ; i++){
            if(prime_number[i]-v1 >= d){
                v2 = prime_number[i] ;
                break ;
            }
        }

        cout << (v1*v2) << endl;
    }
    return 0 ;
}