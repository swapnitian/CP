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
        stack<char> st ;
        
        for(int i = 0 ; i < n ; i++){
            if(i == 0)st.push(s[i]) ;
            else{
                if(!st.empty() && st.top()== s[i]){
                    st.pop() ;
                }else {
                    st.push(s[i]) ;
                }
            }
        }

        if(st.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}