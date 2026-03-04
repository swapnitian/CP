#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >>T ;

    while(T--){
        int n ;
        cin >> n ;

        int arr[n] ;
        for(int i = 0; i < n ; i++) cin >> arr[i] ;
        
        bool f1 = false ;
        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i] <= arr[i+1]){
                f1 = true ;
            }else { 
                f1 = false ;
                break ;
            }
        }

        if(f1) cout << n << endl;
        else cout << 1 << endl ;
    }
}