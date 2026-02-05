#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    long long T ;
    cin >> T ; 
    
    while(T--){
        
        long long n , q ;
        cin >> n >> q ;
        
        vector<long long> v(n) ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;    
        }
            
        
        long long idx , x ;
        
        while(q--){
            cin >> idx >> x ;
            long long score  = 0 ;
            v[idx-1] = x ;
            
            for(int i = 0 ; i < n-1 ; i++){
            
                score += min(v[i] , v[i+1]) ;

            }
            cout << score << endl;
        }   
    }
    return 0 ;
    
}
