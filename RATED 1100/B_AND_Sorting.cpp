#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;

    while(t--){
        int n ;
        cin >> n ;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = (1 << 32) - 1 ;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != i){
                ans = ans & i ;
            }
        }
        cout << ans << endl;
    }
}