#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<ll>arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll pref = 0;
        ll mini = LLONG_MAX;

        vector<ll> ans(n ,0);

        for (int i = 0; i < n; i++) {
            pref += arr[i];

            mini = min(mini, pref/(i + 1));
            
            ans[i] = mini;
        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}