#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ;

        if(n % 4 == 0 && n > 0){
            cout << "Bob" << endl; 
        }else{
            cout << "Alice" << endl;
        }

    }   

}