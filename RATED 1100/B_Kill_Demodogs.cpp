#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        ll n ;
        cin >> n;
        ll mod = 1000000007;

        ll val = (((((n%mod)*(n+1))%mod)*((4*n -1)%mod))%mod)*337 ;


        cout << val%mod << endl;
    }
}