#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        unordered_map < int , int > m ;
        int arr[n] ;
        for(int i = 0 ; i < n; i++) cin >> arr[i] ;

        for(int i = 0 ; i < n; i++) m[arr[i]] = i+1 ;
           
        int ans = -1 ;
        for(int i = 1 ; i <= 1000 ; i++){
            for(int j = 1 ; j <= 1000 ; j++){
                if(m.find(i) != m.end() && m.find(j) != m.end()){
                    if(__gcd(i , j) == 1){
                        ans = max( ans , m[i]+m[j]) ;
                    }
                }
            }
        }
        cout << ans << endl;
    }

}