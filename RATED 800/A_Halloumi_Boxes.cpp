#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T > 0){
        long long n, k ;
        cin >> n >> k ;
        vector<long long > ans(n) ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> ans[i] ;
        }
        
        vector<long long> copy = ans ;
        sort(copy.begin() , copy.end()) ;

        if(copy == ans || k > 1){
            cout << "YES" << endl;
            
        }else if( k <= 1){
            cout << "NO" << endl;
        }
        T-- ;
    }

    return 0 ;
}