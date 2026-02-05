#include <bits/stdc++.h>
using namespace std ; 
int main()
{
    int T ;
    cin >> T ;

    long long n ;

    while(T--){
        cin >> n ;

        long long i = 1 ;

        while(n%i == 0){
            i++ ;
        }
        cout << i-1 << endl;
    }
    return 0 ;
}