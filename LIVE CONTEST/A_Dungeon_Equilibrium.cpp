#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T;

    while(T--){
        int n ; 
        cin >> n ;
        
        unordered_map <int,int> m ;
        
        int v ;

        for(int i = 0 ; i < n ; i++){
            cin >> v ;
            m[v]++ ;
        }

        int ans = 0 ;

        for(auto it : m){
            if(it.first != it.second){
                if(it.second > it.first){
                    ans += it.second - it.first ;
                }else{
                    ans += it.second ;
                }
            }
        }
        

        cout << ans << endl;
    }

}