#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool found = false;
        
        for (int cnt0 = 0; cnt0 <= n && !found; cnt0++) {
            for (int cnt1 = 0; cnt1 <= n && !found; cnt1++) {
                string remaining = "";
                vector<int> indices;
                int zeros_removed = 0;
                int ones_removed = 0;
                
                for (int i = 0; i < n; i++) {
                    if (s[i] == '0' && zeros_removed < cnt0) {
                        indices.push_back(i + 1);
                        zeros_removed++;
                    } else if (s[i] == '1' && ones_removed < cnt1 && zeros_removed == cnt0) {
                        indices.push_back(i + 1);
                        ones_removed++;
                    } else {
                        remaining += s[i];
                    }
                }
                
                if (zeros_removed == cnt0 && ones_removed == cnt1 && isPalindrome(remaining)) {
                    cout << indices.size() << endl;
                    if (indices.size() > 0) {
                        for (int i = 0; i < indices.size(); i++) {
                            if (i > 0) cout << " ";
                            cout << indices[i];
                        }
                        
                    }
                    cout << endl;
                    found = true;
                }
            }
        }
        
        if (!found) {
            cout << "-1" << endl;
        }
    }
   
}