#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    string s ;

    while(T--){
        cin >> s ;

        long long count_0 = 0; long long count_1 = 0 ;

        for(int i = 0 ; i < s.length() ; i++){
            
            if(s[i] == '0'){
                count_0++ ;
            }else{
                count_1++ ;
            }
        
        }

        long long moves = min(count_0 , count_1) ;

        if(moves%2 == 0){
            cout << "NET" << endl;
        }else{
            cout << "DA" << endl;
        }
    }
    return 0 ;
}

// ashi_code
#include <iostream>
#include <string> 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int moves = 0;
        int i = 0;
        int n = s.length() ;

        while (i < n - 1) {
            
            if (s[i] != s[i + 1]){
                s.erase(i, 2);
                n = s.length() ;
                moves++;
                if (i > 0) i--;
                
            }else{
                i++;
            }
        }

        if (moves % 2 != 0) {
            cout << "DA\n";   
        }else{
            cout << "NET\n";  
        }
    }
    return 0;
}