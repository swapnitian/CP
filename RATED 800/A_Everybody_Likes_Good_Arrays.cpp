#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n ; 

    while( T--){

        cin >> n ; 
        long long  a ;
        stack<char> s ;
        for( int i  = 0 ; i < n ; i++){
            cin >> a ; 

            if(a%2 == 0){
                s.push('E') ;
            }else{
                s.push('O') ;
            }
        }

        int count = 0 ;

        while(!s.empty()){

            char a = s.top() ;
            s.pop() ;

            if( !s.empty() && s.top() == a){
                count++;
            }
        }

        cout << count << endl;
    }

}