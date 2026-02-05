#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ; 
        cin >> n ; 
        
        long long y = 10 ;
        vector <long long> vec ;

        int x = 0;
        
        while(y < n){
            if(n%(y+1) == 0){
                vec.push_back(n/(y+1)) ;
                x++ ;
            }
            y *= 10 ;
        }

        cout << x << endl;
        sort(vec.begin() , vec.end()) ;
        if(x != 0){
            for(long long val : vec){
                cout << val << " " ;
            }
            cout << endl;
        }

    }


}