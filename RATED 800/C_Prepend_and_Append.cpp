#include <iostream>
using namespace std ;
int main()
{
    int T ; 

    cin >> T ; 

    int n ; 

    while(T--){
        cin >> n ;

        string s ;
        cin >> s ; 

        int st = 0 ; 
        int end = s.length()-1 ;

        while(st < end){

            if(s[st] != s[end]){
                st++;
                end--; 
            }else{
                break ;
            }
        }   

        cout << (end-st) + 1 << endl;
    }
}