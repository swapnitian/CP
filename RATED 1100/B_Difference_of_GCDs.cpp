#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        ll n , l , r ;
        cin >> n >> l >> r;

        vector<int> ans(n+1);
        ll cnt = 0;

        for(int i = 1; i <= n; i++){
            if(r%i == 0){
                ans[i] = r;
                cnt++;
            }else{
                int val = r - (r%i);
                if(val >= l){
                    ans[i] = val;
                    cnt++;
                }
            }
        }

        if(cnt < n){
            cout << "NO\n" ;
        }else{
            cout << "YES\n" ;
            for(int i = 1; i <= n; i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }

    }
}