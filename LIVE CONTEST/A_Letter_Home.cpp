#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ; 

    while(t--){

        int n , s ;
        cin >> n >> s ;

        int arr[n] ;

        for(int i= 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        int min_d = 0 ;
        int max_d = 0 ;

        int ans = 0 ;

        if(arr[0] == s){
            cout << arr[n-1]-s << endl;
            continue;
        }else if(arr[n-1] == s){
            cout << s-arr[0] << endl;
            continue; 
        }else if(s > arr[0] && s < arr[n-1]){

            min_d = s-arr[0] ;
            max_d = abs(arr[n-1]-s) ;

            if(min_d <= max_d){
                ans = 2*(min_d) + max_d; 
            }else{
                ans = 2*(max_d) + min_d ;
            }

            cout << ans << endl;
        }else if(s > arr[n-1]){
            cout << abs(s-arr[0]) << endl;
        }else{
            cout << arr[n-1] - s << endl;
        }

    }
}