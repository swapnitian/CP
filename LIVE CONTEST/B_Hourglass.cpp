#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while(T--){
        int s , k , m ; 
        cin >> s >> k >> m ;
        
        int n = m/ k;
        int d = m%k ;

        if(n%2 == 0 || k > s){
            cout << max(0 , s-d) << endl ;
        }else{
            cout << max(0 , k-d) << endl ;
        }

   }
}