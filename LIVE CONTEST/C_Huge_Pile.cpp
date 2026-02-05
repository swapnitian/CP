#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while(T--){
        long long n, k;
        cin>>n>>k;;

        if (n == k) {
            cout << 0 << endl;
            continue ;
        }
        bool f1 = true ;
        long long minv = n;
        long long maxv = n;
        int mint = 0;

        while (maxv >= k) {
            minv = minv / 2;
            maxv = (maxv + 1) / 2;
            mint++;

            
            if (k >= minv && k <= maxv) {
                cout << mint << endl;
                f1 = false ;
                break;
            }

            if (maxv < k) break;
            
            if (maxv == 0) break;
        }

        if(f1) cout << -1 << endl;
    }
}
