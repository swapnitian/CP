#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long a , b ;
        cin >> a >> b ;

        long long x = 0 ;

        if(a % 4 == 0){
            x = 0 ;
        }else{
            int v = a%4 ;
            for(int i = a-v ; i < a ; i++){
                x ^= i ;
            }
        }

        if(x == b){
            cout << a << endl;
        }else if((x^a) == b){
            cout << a+2 << endl;
        }else{
            cout << a+1 << endl;
        }

    }
    return 0 ;
}