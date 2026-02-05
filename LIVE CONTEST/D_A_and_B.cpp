#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n ; 
        cin >> n ;

        string s ;
        cin >> s ;

        int count_a = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'a')count_a++ ;
        }
        
        int count_b = n - count_a ;

        if(count_a == 0 || count_a == 1 || count_b == 0 || count_b == 1){
            cout << 0 << endl;
        }else{

            int fin_oper = INT_MAX ;

            for(int i = 0 ; i <= count_a ; i++){
                int oper_a = 0 ;
                for(int j = i ; j < i+count_b ; j++){
                    if(s[j] == 'b'){
                        oper_a++ ;
                    }
                }
                fin_oper = min(fin_oper , oper_a) ;
            }
            
            for(int i = 0 ; i <= count_b ; i++){
                int oper_b = 0 ;
                for(int j = i ; j < i+count_a ; j++){
                    if(s[j] == 'a'){
                        oper_b++ ;
                    }
                }
                fin_oper = min(fin_oper , oper_b) ;
            }
            
            cout << fin_oper << endl;
        }

    }

}