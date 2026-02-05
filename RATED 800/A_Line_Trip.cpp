#include <iostream>
#include <vector>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ; 

    while(T--){
        int n , x ;
        cin >> n >> x ;

        vector<int> v ;
        int a ;
        v.push_back(0) ;
        for( int i = 0 ; i < n ; i++){
            cin >> a ;
            v.push_back(a) ;
        }
        v.push_back(x) ;
        n = v.size() ;

        int D = INT_MIN ; 
        for( int i = 0 ; i < n ; i++){
             
            if( i == n-1){
                D = max( D , 2*(x-v[i-1])) ;
            }else{
                D = max(D , v[i+1]-v[i]) ;
            }
        }

        cout << D << endl;
        
    }
    return 0 ;
}