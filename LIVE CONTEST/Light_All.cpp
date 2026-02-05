#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int T ;
    cin >> T ;
    
    while(T--){

        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int count_0 = 0 ; 
        int count_1 = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                count_0++;
            }else{
                count_1++ ;
            }
        }  
        
        if(n == 1){
            if(s[0] == '0'){
                cout << "No" << endl;
                continue; 
            }else{
                cout << "Yes" << endl;
                continue ;
            }
        }  
        
        
        if((count_0 > count_1) ){
            cout << "No" << endl;
        }else if(s[0] == '0' && s[1] == '0'){
            cout << "No" << endl;
        }else if(s[n-1] == '0' && s[n-2] == '0'){
            cout << "No" << endl;
        }else {
            
            int l = 0 ; int e = 1 ;
            
            while(l < n && e < n){
                
                if(s[l] != s[e]){
                    s[l] = '.' ; 
                    s[e] = '.' ;
                    l = l+2 ;
                    e = e+2 ;
                }else{
                    l++ ;
                    e++ ;
                }
            }
            bool check = true ;

            for(int i = 0 ; i < n ; i++){
                if(s[i] == '0'){
                    cout << "No" << endl;
                    check = false ;
                    break ;
                }
            }
            
            if(check){
                cout << "Yes" << endl; 
            }           
        }         
    }   
    return 0 ;
}
