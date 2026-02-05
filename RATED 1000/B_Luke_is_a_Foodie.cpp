#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ; 

    while(T--){
        long long n , x ;

        cin >> n >> x ;

        vector<long long> arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        vector<pair<long long , long long>> v(n);

        for(int i = 0 ; i < n ; i++){
            v[i] = {arr[i]-x , arr[i]+x} ;
        }

        long long l = v[0].first ;
        long long r = v[0].second ;
        long long ans = 0 ;

        for(int i = 1 ; i < n ; i++){

            l = max(l , v[i].first) ;
            r = min(r , v[i].second) ;

            if(l > r){
                ans++ ;
                l = v[i].first ;
                r= v[i].second ;
            }
        }

        cout << ans << endl;
    }
}