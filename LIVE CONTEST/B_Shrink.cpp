#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n ;

    while(T--){
        cin >> n ;

        if( n == 3){
            cout << 1 << " " << 3 << " " << 2 << endl;
        }else if( n == 4){
            cout << 2 << " " << 3 << " " << 4 << " " << 1 << endl;
        }else{
            vector<long long > ans ;

            ans.push_back(2) ;
            ans.push_back(3) ;

            int idx = n-5 ;

            while(idx--){
                ans.push_back(n) ;
                n-- ;
            }

            ans.push_back(4) ;
            ans.push_back(5) ; 
            ans.push_back(1) ;

            for(int val : ans){
                cout << val << " " ; 
            }
            cout << endl;
        }
    }
    return 0 ;
}