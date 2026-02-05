#include <bits/stdc++.h>
using namespace std ;
int main(){

    int T ;
    cin >> T ;

    while(T--){

        long long n , k ;

        string s ;

        cin >> n >> k ;
        cin >> s ;
        int n1 = s.size() ;
        string help = "" ; 
        unordered_map<char , int> m ;
        char c = 'a';
        
        for(int i = 1 ; i < 27 ; i++){
            m[c] = i ;
            c++ ;
        }

        for(int i =0  ; i < n1 ; i++){
           help = help + to_string(m.at(s[i])) ;
        }
        int val = stoi(help) ;

        sort(help.begin() , help.end()) ;


        cout << help << endl;
    }



}