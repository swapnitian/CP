#include <iostream>
#include <string>
#include <stack>
#include <vector> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    int n ;
    while(T--){
        cin >> n ;
        string st ;
        cin >> st  ;
    
        stack <char> s ;
        for( int i = 0 ; i < n ; i++){
            s.push(st[i]) ;
        }
        int count = 0 ;
        int c1 = 0 ;
        bool check = true ;
        while( !s.empty()){
            if(s.top() == '.'){
                count++ ;
                c1++ ;
                s.pop() ;
                if(count == 3){
                    cout << 2 << endl ;
                    check = false ;
                    break ;
                }
            }else{
                s.pop() ;
                count = 0 ;
            }
        }
        if(check){
            cout << c1 << endl;
        }
    }
}