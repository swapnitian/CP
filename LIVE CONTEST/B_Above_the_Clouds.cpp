#include <bits/stdc++.h>
using namespace std ;
int main()
{
    long long T ;
    cin >>T ; 

    while(T--){

        long long n ; 
        cin >> n ;

        string s ;
        cin >> s ;
        
        char a = s[0] ;
        char c = s[n-1] ;

        bool check = true ;
        unordered_map<char , int > m ; 

        for(int i= 1 ; i < n-1 ; i++){

            if(s[i] == a || s[i] == c){
                cout << "Yes" << endl;
                check = false ;
                break ;
            }

            m[s[i]]++ ;
        }

        if(check){

            for(auto v : m){

                if(v.second > 1){
                    cout << "Yes" << endl;
                    check = false ;
                    break ;
                }

            }
        }


        if(check) cout << "No" << endl;

    }

    return 0 ;
}