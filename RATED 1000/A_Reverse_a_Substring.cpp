#include <bits/stdc++.h>
using namespace std ;
int main()
{
 
    long long n ;
    cin >> n ;

        string s ;
        cin >> s ;

        int a = s[0] ;
        int l = 1 , r ;

        bool check = true ;

        for(int i = 1 ; i < n ; i++){
            
            r = i+1 ;

            if( a > s[i]){
                cout << "YES" << endl; 
                cout << l << " " << r << endl;
                check = false ;
                break ;
            }else{
                a = s[i] ;
                l = i+1 ;
            }
           
        }

        if(check){
            cout << "NO" << endl;
        }

}