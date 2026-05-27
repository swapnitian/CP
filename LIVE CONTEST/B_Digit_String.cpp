#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        string s;
        cin >> s;

        int n = s.size();

        int odd = 0; int even = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1' || s[i] == '3'){
                odd++;
            }
        }
        int ans = odd;
        for(int i = 0; i < n; i++){
            if(s[i] == '2'){
                even++;
            }else if(s[i] == '1' || s[i] == '3'){
                odd--;
            }
            ans = max(ans , odd + even);
        }
        cout << n-ans << endl;
    }
}