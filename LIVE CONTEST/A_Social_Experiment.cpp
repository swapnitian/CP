#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while(T--){
        int n ; 
        cin >> n ;

        if(n <= 3) cout << n << endl;
        else if(n%2 == 0 && n >= 4) cout << 0 << endl;
        else cout << 1 << endl; 
    }
}