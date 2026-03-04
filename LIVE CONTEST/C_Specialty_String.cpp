#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ; 

        string s ;
        cin >> s ;
        stack<pair<char,int>> st ;
        
        for(int i = 0 ; i < n ; i++){
            if(i == 0)st.push({s[i] , 0}) ;
            else{
                if(!st.empty() && st.top().first == s[i]){
                    s[i] = '*' ;
                    s[st.top().second] = '*' ;
                    st.pop() ;
                }else {
                    st.push({s[i] , i}) ;
                }
            }
        }

        if(st.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}