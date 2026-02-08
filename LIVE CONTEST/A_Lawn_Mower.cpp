#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n , w ;
        cin >> n >> w ;

        if(w == 1) cout << 0 << endl;
        else{
            long long d = n/w ;
            cout << n-d << endl;
        }
    }
}