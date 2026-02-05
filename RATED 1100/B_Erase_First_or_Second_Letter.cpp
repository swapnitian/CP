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

        set<char> s1 ;
        int count = 0 ;

        long long ans = 0 ;

        for(int i = 0 ; i < n ; i++){

            if(s1.find(s[i]) == s1.end()){
                s1.insert(s[i]) ;
                count++ ;
            }

            ans += count ;

        }

        cout << ans << endl;

    }

}