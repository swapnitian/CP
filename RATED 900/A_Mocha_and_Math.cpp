#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;

    long n ; 

    while(T--){
        cin >> n ;

        vector<long long> v(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

        long long x = v[0] ;

        for(int i = 1 ; i < n ; i++){
            x = x&v[i] ;
        }
        cout << x << endl;

    }
}

