#include <bits/stdc++.h>
using namespace std ;

pair <long long , long long> max_3(long long n){

    long long p = 3 ;
    long long x = 1 ;

    while(p*3 <= n){
        p *= 3 ;
        x++ ;
    }

    return {p , x} ;  
}

int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ;

        long long cost = 0 ;
        long long deal = 0 ;

        while(n >= 3){

            long long p = max_3(n).first ;
            long long x = max_3(n).second ;

            deal = n/p ;

            cost +=  (deal)*(pow(3 , x-1))*(9+x) ;
            n = n%p ;
        }
        cost += n*3 ;

        cout << cost << endl;
    }


}