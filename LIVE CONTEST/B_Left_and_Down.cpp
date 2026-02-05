#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long  x , y , k ;
        cin >> x >> y >> k ;

        if(x <= k && y <= k){
            cout << 1 << endl;
        }else{

            long long a = gcd(x  ,y) ;

            if(x/a <= k && y/a <= k){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }

        }

        
    }

}