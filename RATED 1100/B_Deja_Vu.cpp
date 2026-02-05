#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n , q ;
        cin >> n >> q ;

        long long a[n] ; long long x[q] ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        for(int i = 0 ; i < q ; i++){
            cin >> x[i] ;
        }
        long long min_x = 31;
        for(int i = 0 ; i < q ;i++){

            if(x[i] < min_x) min_x = x[i] ;
            else continue ;

            long long ele = pow(2 , x[i]) ;
            long long add = pow(2 , x[i]-1) ;

            for(int j = 0 ; j < n ; j++){
                if(a[j]%ele == 0){
                    a[j] += add ;
                }
            }
        }

        for(int i = 0 ; i < n ;i++){
            cout << a[i] << " " ;
        }
        cout << endl;
    }
}