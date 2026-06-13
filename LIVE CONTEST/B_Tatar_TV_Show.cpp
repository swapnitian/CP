#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n , k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool f1 = true;
        for(int i = 0; i < k; i++){
            int cnt1 = 0;
            for(int j = i; j < n; j += k){
                if(s[j] == '1'){
                    cnt1++;
                }
            }

            if(cnt1 & 1){
                f1 = false;
                break;
            }
        }

        if(f1) cout << "YES\n";
        else cout << "NO\n";

    }
}