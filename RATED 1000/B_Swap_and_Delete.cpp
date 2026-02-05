#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int T ;
    cin >> T ;

    while(T--){

        string s ;
        cin >> s ;

        long long count_0 = 0 ; long long count_1 = 0 ;

        long long n = s.length() ;

        for(int i = 0 ; i < n ; i++){

            if(s[i] == '0'){
                count_0++ ;
            }else{
                count_1++ ;
            }
        }

        if(count_0 == count_1){
            cout << 0 << endl;
        }else{

            long long v1 = min(count_0 , count_1) ;
            long long v2 = v1 ;

            int idx1 = 0 ; int idx2 = 0 ;

            while(idx1 < n && v1 > 0){

                if(s[idx1] == '0'){
                    s[idx1] = '.' ;
                    v1-- ;
                }
                idx1++;
            }

            while(idx2 < n && v2 > 0){

                if(s[idx2] == '1'){
                    s[idx2] = '.' ;
                    v2-- ;
                }
                idx2++;
            }
            int ans ;
            for(int i = 0 ; i < n ; i++){
                
                if(s[i] != '.'){
                    ans = i ;
                    break ;
                }
            
            }

            cout << s.length()-ans << endl;

        }
    }
    return 0 ;
}