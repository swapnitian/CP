#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, x, s;
        cin >> n >> x >> s;
        string eia;
        cin >> eia;

        int empty = x;
        int ans = 0;

        priority_queue<int> pq; // remaining seats in open tables

        for (char c : eia) {

            if (c == 'I') {
                if (empty > 0) {
                    empty--;
                    ans++;
                    if (s - 1 > 0)
                        pq.push(s - 1);
                }
            }

            else if (c == 'E') {
                if (!pq.empty()) {
                    int rem = pq.top();
                    pq.pop();
                    rem--;
                    ans++;
                    if (rem > 0)
                        pq.push(rem);
                }
            }

            else { // A
                if (!pq.empty()) {
                    int rem = pq.top();
                    pq.pop();
                    rem--;
                    ans++;
                    if (rem > 0)
                        pq.push(rem);
                }
                else if (empty > 0) {
                    empty--;
                    ans++;
                    if (s - 1 > 0)
                        pq.push(s - 1);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}