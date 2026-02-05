#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n , k ;     
        cin >> n >> k ;
        int ans = k ;
        int l , r , x ;
        vector<pair<pair<int,int> ,int >> v ;

        while(n--){
            cin >> l >> r >> x ;
            v.push_back({{l,r} , x}) ;
        }

        sort(v.begin() , v.end()) ;

        for(int i = 0 ; i < v.size() ; i++){
            if(ans >= v[i].first.first && ans <= v[i].first.second){
                ans = max(ans , v[i].second) ;
            }

        }
        
        cout << ans << endl;

    }

}