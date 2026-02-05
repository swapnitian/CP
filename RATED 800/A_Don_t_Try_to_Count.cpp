#include <iostream>
#include <string>
using namespace std ;

bool check_substr(string x ,string s){

    if( s.size() > x.size())return false ;

    for( int i = 0 ; i <= x.size() - s.size() ; i++){

        if(x.substr(i , s.size()) == s) return true ;
    
    }

    return false ;
}

int main()
{
    int T ; 
    cin >> T ;
    int n , m ;
    while(T--){
        cin >> n >> m ;

        string x ;
        cin >> x ;
        
        string s ;
        cin >> s ;

        string x1 = x+x ;
        string x2 = x1+x1 ;
        string x3 = x2+x2 ;
        string x4 = x3+x3 ;
        string x5 = x4+x4 ;

        if(check_substr(x ,s)){
            cout << 0 << endl ;
        }else if(check_substr(x1 , s)){
            cout << 1 << endl;
        }else if(check_substr(x2 , s)){
            cout << 2 << endl;
        }else if(check_substr(x3 , s)){
            cout << 3 << endl;
        }else if(check_substr(x4 , s)){
            cout << 4 << endl;
        }else if(check_substr(x5 , s)){
            cout << 5 << endl;
        }else{
            cout << -1 << endl;
        }
    }
}