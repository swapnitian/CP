#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long a , b ;

        cin >> a >> b ;

        if( b > a){
            swap(a , b) ;
        }

        if(a == b){
            cout << 0 << " " << 0 << endl; 
        }else{
            long long score = a-b ;
            long long decrement = b%score ;


            long long moves = min(decrement , score-decrement) ;

            cout << score << " " << moves << endl;

        }
    }
    return 0;
}