#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , k; 
        cin >> n >> k ; 

        int x = 1 ;

        int p = 3 ;

        // while(p*3 <= n){
        //     p *= 3 ;
        //     x++ ;
        // }

        x = n%3 ;
        cout << x << endl;

        long long cost = (pow(3 , x-1))*(9+x) ;

        cout << cost << endl;
        int d = n/p ;
        int r = n%p ;

        cout << r << " " << d << endl ;

        if(r+x > k){
            cout << -1 << endl;
        }else{
            cout << d*cost + r*3 << endl;
        }
    }
}