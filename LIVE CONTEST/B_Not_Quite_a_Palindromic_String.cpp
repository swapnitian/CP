#include <iostream>
#include <string>
using namespace std ;

int main()
{
    int T ; 
    cin >> T; 

    string s ;
    long long n , k ; 

    while(T--){
        cin >> n >> k  ;
        cin >> s ;

        long long count = 0 ;

        for( long long i = 0 ; i < n/2 ; i++){
            if( s[i] == s[n-i-1]){
                count++ ;
            }
        }
        
        if( count == k){
            cout << "YES" << endl;
        }else if( count > k || count < k){
            cout << "NO" << endl;
        }
    }

    return 0 ;
}