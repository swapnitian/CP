#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n ;

    while(T--){
        cin >> n ;

        int arr[n] ;


        for( int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        int Min = arr[0] ;
        int Max = arr[n-1] ;

        if(Min == Max){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << Max << " " ;

            for( int i = 0 ; i < n-1 ; i++){
                cout << arr[i] << " " ;
            }

            cout << endl;
        }


    }
}