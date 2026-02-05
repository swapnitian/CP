#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    string s ; 
    string t ;

    while(T--){
        cin >> s >> t ;

        unordered_map<int , int> m ;

        int n1 = s.length() ;
        int n2 = t.length() ;

        for(int i = 0 ; i < n2  ; i++){
            m[t[i]]++ ;
        }

        if(s == t){
            cout << "YES" << endl;
        }else{
            for(int i = n1-1 ; i >= 0 ; i--){

                if(m.find(s[i]) != m.end()){

                    if(m.at(s[i]) > 0){
                        m[s[i]] = m[s[i]]-1 ;
                    }else{
                        s[i] = '.' ;
                    }

                }else{
                    s[i] = '.' ;
                }

            }
            string ans = "";
            for(int i = 0 ; i < n1 ; i++){
                if(s[i] != '.'){
                    ans = ans+s[i] ; 
                }
            }
            
            if(ans == t){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }

    }
    return 0 ;
}




// 2nd Method ->

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
 
        vector<int> frequency_in_t(26, 0);
        for (int i = 0; i < m; i++) // m
            frequency_in_t[t[i] - 'A']++;
 
        for (int i = n - 1; i >= 0; i--) // n
        {
            if (frequency_in_t[s[i] - 'A'] > 0)
                frequency_in_t[s[i] - 'A']--;
            else
                s[i] = '.';
        }
 
        string final_string = "";
 
        for (int i = 0; i < n; i++) // n
        {
            if (s[i] != '.')
                final_string += s[i];
        }
 
        if (final_string == t) // m
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
 
// tc = O(n+m) = O(30)
// sc = O(n+m+26+m) = O(n+m) = O(30)