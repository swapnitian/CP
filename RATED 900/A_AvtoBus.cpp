#include <bits/stdc++.h>
using namespace std ;

long long int MAX(long long int n){

    int i = 0 ;

    while(n%4 != 0){
        n = n-6 ;
        i++ ;
    }
    return n/4+i ;
}
long long int MIN(long long int n){
    int i = 0 ;

    while(n%6 != 0){
        n = n-4 ;
        i++ ;
    }
    
    return n/6 +i ;
}
int main()
{
    int T ;
    cin >> T ;

    long long n ; 

    while(T--){
        cin >> n ; 

        if(n % 2 != 0 || n < 4){
            cout << -1 << endl;
        }else{
            long long Min , Max = 0 ;

            if((n%4 == 0) && (n%6 == 0)){
                Max = n/4 ;
                Min = n/6 ;

                cout << Min << " " << Max << endl;
            }else{
                if(n%4 == 0){
                    Max = n/4 ;
                    cout << MIN(n) << " " << Max << endl;
                }else if( n%6 == 0){
                    Min = n/6 ;
                    cout << Min << " " << MAX(n) << endl;
                }else{                    
                    cout << MIN(n) << " " << MAX(n) << endl;
                }
            }
        }

    }
}