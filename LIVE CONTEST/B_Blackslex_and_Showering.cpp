#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum = 0;
        for (int i = 0; i + 1 < n; i++) {
            sum += llabs(a[i] - a[i + 1]);
        }
        long long ans = sum;

        ans = min(ans, sum - llabs(a[0] - a[1]));
        ans = min(ans, sum - llabs(a[n - 2] - a[n - 1]));

        for (int i = 1; i + 1 < n; i++) {
            long long r =
                llabs(a[i - 1] - a[i]) + llabs(a[i] - a[i + 1]);
            long long v =
                llabs(a[i - 1] - a[i + 1]);

            long long k = sum - r + v;
            ans = min(ans, k);
        }
        cout << ans << endl;
    }
}
