#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T ;
    cin >> T ;

    while(T--){
        ll n,k  ; 
        cin >> n >> k;

        vector< ll > arr(n) ;
        ll sum = 0; 
        vector<ll> prefix(n+1 ,0) ;
        
        for(int i= 0 ; i < n ; i++){
            cin >> arr[i] ;
            sum += arr[i] ;
        }
        
        sort(arr.begin() , arr.end()) ;
        
        for(int i = 1 ; i <= n ; i++) prefix[i] = prefix[i-1] + arr[i-1]; 
        ll ans = 0 ;
        for(int i = 0 ; i <= k ; i++){
            int left = 2*i;
            int right = n-(k-i) ;

            ans = max(ans , prefix[right]-prefix[left]) ;
        }
        cout << ans << endl;
    }

}