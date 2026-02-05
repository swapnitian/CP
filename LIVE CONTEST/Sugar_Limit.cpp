#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n ; 
        cin >> n ;

        int a[n] ;
        int b[n] ;

        int sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;

            if(a[i] > 0){
                sum += a[i] ;
            }

        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }

        vector <pair< int , int>> v ;

        for(int i = 0 ; i < n ; i++){

            if(a[i] > 0){
                v.push_back({b[i] , a[i]}) ;
            }
        }

        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            if (a.first != b.first) {
                return a.first > b.first;  
            }
                return a.second > b.second;    
        });

        int ans = 0 ;

        for(int i = 0 ; i < v.size() ; i++){

            ans = max(ans , sum-v[i].first) ;
            sum = sum - v[i].second ;
        }

        cout << ans << endl;

    }
}