#include <bits/stdc++.h>
using namespace std ;
#define long long = ll ;
int main()
{
    int T ;
    cin >> T; 

    while(T--){
        int n ; 
        cin >> n ;
        string s ;
        cin >> s ;

        int count_0 = 0;

        if(n > 2 && s[0] == '0' && s[0] == s[n-1]){
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '0') count_0++ ;
                else break ;
            }
            for(int i = n-1 ; i > 0 ; i--){
                if(s[i] == '0') count_0++ ;
                else break ;
            }
        }
        int max_zero = count_0 ;
        count_0 = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                count_0++ ;
            }else{
                max_zero = max(max_zero , count_0) ;
                count_0 = 0 ;
            }
        }
        if(s[n-1] == '0') max_zero = max(max_zero , count_0) ;
        
        cout << max_zero << endl;
    }
}