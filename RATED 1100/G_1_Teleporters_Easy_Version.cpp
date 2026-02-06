#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long  n , k ;
        cin >> n >> k ;

        long long arr[n] ;

        for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

        vector<int> v(n ,0) ;

        for(int i = 0 ; i< n ; i++){
            v[i] = arr[i]+i+1 ;
        }
        sort(v.begin() , v.end()) ;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(k - v[i] >= 0){
                ans++ ;
                k = k-v[i] ;
            }else{
                break ;
            }
        }
        cout << ans << endl;
    }
}