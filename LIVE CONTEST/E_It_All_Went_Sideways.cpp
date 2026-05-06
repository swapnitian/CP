#include <bits/stdc++.h> 
using namespace std ;
using ll = long long;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        ll n ;
        cin >> n;

        vector<int> arr(n) ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }

        // create the suffix array 
        vector<int> suff(n) ;

        suff[n-1] = arr[n-1];

        for(int i = n-2; i >= 0; i--){
            suff[i] = min(suff[i+1] , arr[i]);
        }
        ll ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans += arr[i]-suff[i] ;
        }
        
        ll cnt = 1;
        ll maxB = 0;

        for(int i = 0; i < n-1; i++){
            if(suff[i] == suff[i+1]){
                cnt++;
            }else{
                maxB = max(cnt-1 , maxB);
                cnt = 1;
            }
        }
        maxB = max(cnt-1 , maxB);

        cout << ans + maxB << endl;
    }
}