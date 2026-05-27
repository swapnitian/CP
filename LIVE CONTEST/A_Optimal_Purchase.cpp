#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T ;
    cin >> T;

    while(T--){
        ll n , a , b;
        cin >> n >> a >> b;

        ll rem = n % 3;
        ll grp = n / 3;

        ll ans1 = n*a;
        ll ans2 = (grp*b) + (min(rem * a , b));
        
        cout << min(ans1 , ans2)<< endl;
    }
}