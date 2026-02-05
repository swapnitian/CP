#include <bits/stdc++.h>
using namespace std;

int GCD (long long X , long long Y){
    
    if(gcd(X ,Y) > 1){
        return 0 ;  
    }else{
        
        X++ ;
        
        if(gcd(X ,Y) > 1) return 1 ;
        
        Y++ ; 
        X-- ;
        
        if(gcd(X ,Y) > 1 ) return 1 ; 
    }
    
    return 2 ;
}

int main() {
	// your code goes here
    
    int T ;
    cin >> T ;
    
    while(T--){
        long long  X , Y ;
        cin >> X >> Y ; 
        
        int ans = GCD(X , Y) ;
            
        cout << ans << endl;
    }
}
