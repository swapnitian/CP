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
        if(arr[0] == 1 || arr[n-1] == 1)cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
}