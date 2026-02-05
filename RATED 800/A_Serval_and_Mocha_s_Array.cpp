#include <bits/stdc++.h>
using namespace std ;

bool check_beautifull(vector<int>&v){

    for( int i = 0 ; i < v.size()-1 ; i++){
        int a = v[i] ;
    
        for( int j = i+1 ; j < v.size() ; j++){

            if(gcd(a , v[j])  <= 2){    // gcd for small calcultaions
                
                return true ;
            }
        }
    }

    return false ;
}
int main()
{
    int T ; 
    cin >> T ;

    int n ; 

    while (T--){
        /* code */
        
        cin >> n ;

        vector<int> v(n) ;

        for( int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }

          
        if(check_beautifull(v)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;    
        }

    }
    
} 