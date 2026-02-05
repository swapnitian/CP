#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ;

        string s ;
        cin >> s ;

        int sum = 0 ;
        int operations = 0 ;

        for(int i = 0 ; i < n ; i++){

            if(s[i] == '('){
                sum += 1 ;
            }else{
                sum -= 1 ;
                
                if(sum < 0){
                    operations++ ;
                    sum = 0 ;
                }
                
            }
        }

        cout << operations << endl; 

    }   


}