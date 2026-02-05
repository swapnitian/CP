#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , r , b ;
        cin >> n >> r >> b ;

        long long b1 = b ;
        
        b1++ ;
        long long v = r/b1 ;

        string s ;

        // there will be total b+1 regions in each region first filled R with frequency of (r/b+1);

        long long freq_r = r/(b+1) ;
        long long remaining_r = r%(b+1) ;

        for(int i = 0 ; i <= b ; i++){

            for(int j = 0 ; j < freq_r ; j++){
                s += 'R' ;
            }

            if(remaining_r > 0){
                s += 'R' ;
                remaining_r-- ;
            }

            if(i != b){
                s += 'B' ;
            }
        }
        cout << s << endl;
    }
    return 0 ;
}