#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;
    
    while(T--){
        ll n , x , y;
        cin >> n >> x >> y ;
   
        if(x == y){
            cout << 0 << endl;
            continue;
        }

        ll total = (n*(n+1))/2; 

        ll com = n / lcm(x,y) ; 
        
        ll x1 = n/x - com; 
        x1 = n-x1 ;
        
        ll y1 = n/y - com;
        y1 = (y1*(y1+1))/2;
        
        ll x2 = (x1*(x1+1))/2;
        
        cout << total - x2 - y1 << endl;
    }
}