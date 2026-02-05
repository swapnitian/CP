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

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        int ans[n] ;


        for(int i = 0 ; i < n ; i++){
            ans[i] = n+1 - arr[i] ;
        }

        for(int v : ans){
            cout << v << " " ;
        }
        cout << endl;
    }

}