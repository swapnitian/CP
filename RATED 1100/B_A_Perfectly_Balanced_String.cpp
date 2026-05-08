#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T;

    while(T--){
        string s;
        cin >> s;
        
        int n = s.size();
        
        // check whether the string is periodic or not -- 

        set<char>st;
        int idx2 = n;
        for(int i = 0; i < n ; i++){
            if(st.find(s[i]) != st.end()){
                idx2 = i ;
                break;
            }
            st.insert(s[i]);
        }
        int idx1 = 0;
        bool f1 = true;

        while( idx2 < n && idx1 < idx2 ){
            if(s[idx1] == s[idx2]){
                idx2++;
                idx1++;
            }else{
                cout << "NO\n";
                f1 = false;
                break;
            }
        }

        if(f1)cout << "YES\n";
    }
}