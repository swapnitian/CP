#include <bits/stdc++.h>
using namespace std ;

long long answer(long long n , long long moves ){

    while( n > 1 ){

        if( n%6 == 0){
            moves++ ;
            n = n/6 ;
        }else{
            n = n*2 ;
            if(n%6 != 0){
                return -1 ;
            }
            moves++;
        }
    }

    return moves ;

}
int main()
{
    int T ;
    cin >> T ; 

    long long n ; 
    
    while(T--){
        long long moves = 0 ;
        cin >> n ;

        if( n == 1){
            cout << 0 << endl;
            continue;
        }

        if(n%6 == 0){
            cout << answer(n , moves) << endl;
        }else{
            moves++ ;
            cout << answer(2*n , moves) << endl;
        }
    }
    return 0 ;
}