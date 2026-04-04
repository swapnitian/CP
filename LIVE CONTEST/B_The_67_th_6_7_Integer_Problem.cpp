#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        vector<int> arr(7) ;

        for(int i = 0 ; i < 7 ; i++){
            cin >> arr[i] ;
        }

        sort(arr.begin() , arr.end()) ;

        int ans = 0; 
        for(int i = 0 ; i < 6 ; i++){
            ans += -arr[i] ;
        }
        ans += arr[6] ;

        cout << ans << endl;
    }
}