#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        string s ;
        cin >> s ;

        if(s.size() <= 2){
            cout << s << endl; 
            continue; 
        }

        bool check = false ;
        int  count_T = 0 ; 

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'T'){
                count_T++ ;
            }
        }

        for(int i = 0 ; i < s.size()-2 ; i++){

            if(s.substr(i , 3) == "FFT" || s.substr(i , 3) == "NTT"){
                check = true ;
            }

        }

        string ans = "" ;

        if(check){

            while(count_T--){
                ans.push_back('T') ;
            }

            for(int i = 0 ; i < s.size() ; i++){
                if(s[i] != 'T'){
                    ans.push_back(s[i]) ;
                }
            }


            cout << ans << endl;

        }else{
            cout << s << endl;
        }

    }

}