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

        int odd = 0 ; int even = 0 ;

        for(int i =0 ; i < n ; i++){
            cin >> arr[i] ;
            
            if(arr[i]%2 == 0) even++ ;
            else odd++ ;
        }
        
        if(odd > 0 && even > 0){
            sort(arr , arr+n) ;
            for(int i = 0 ; i < n ; i++){
                cout << arr[i] << " " ;
            }
        }else{
            for(int i = 0 ; i < n ; i++){
                cout << arr[i] << " " ;
            }
        }
        cout << endl;
    }

}