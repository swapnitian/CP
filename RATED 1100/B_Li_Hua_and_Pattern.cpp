#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n , k ;
        cin >> n >> k;

        vector<vector<int>> v(n , vector<int>(n));

        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        int cnt = 0;

        for(int i = 0; i < n; i++){
            for(int  j = 0 ; j < n ; j++){
                if(v[i][j] != v[n-1-i][n-1-j]) cnt++;
            }
        }

        cnt = cnt/2 ;

        // cout << cnt << endl;
        if(cnt > k){
            cout << "NO\n";
        }else{
            int rem = k - cnt ;

            if(rem%2 == 0){
                cout << "YES\n";
            }else if(n & 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }
    }
}