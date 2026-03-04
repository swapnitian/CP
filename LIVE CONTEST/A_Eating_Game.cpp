#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    while(T--){
        int n ;
        cin >> n ;
        int arr[n] ;

        for(int i =0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        sort(arr , arr+n) ;
        int ans = 1 ;
        for(int i = n-2 ; i >= 0 ; i--){
            if(arr[i] == arr[i+1]) ans++ ;
            else break ;
        }
        cout << ans << endl;
    }
}