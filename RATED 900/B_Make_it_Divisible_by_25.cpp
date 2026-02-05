#include <bits/stdc++.h>
using namespace std ;

int Operations(string s , string divisible){

    int idx = 1 ; 
    int operations = 0 ;

    for(int i = s.length()-1 ; i >=0  ; i--){

        if(s[i] == divisible[idx]){
            idx-- ;
            if(idx < 0) break ;
        }else{
            operations++ ;
        }
    }

    if(idx >= 0){
        operations = INT_MAX ;
    }

    return operations ;
}

int main()
{
    long long T ;
    cin >> T ; 

    vector<string> S = { "00" , "25" , "75" , "50"} ;

    while(T--){

        string s ;
        cin >> s ;

        int ans = INT_MAX ;
        for(auto value : S){
            ans = min(ans , Operations(s , value)) ;
        }
        cout << ans << endl;
    }   
    return 0 ; 
}