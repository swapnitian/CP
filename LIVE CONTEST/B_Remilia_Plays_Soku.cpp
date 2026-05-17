#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--){
        ll n , x , y , k;
        cin >> n >> x >> y >> k;
        
        ll val = min(abs(x-y) , n-abs(x-y));
        
        ll maxi = n/2 ;

        if(val == maxi){
            cout << val << endl;
        }else{
            cout << val + k << endl;
        }

    }

}