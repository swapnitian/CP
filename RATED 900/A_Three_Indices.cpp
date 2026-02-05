#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n ; 

    while(T--){
        cin >> n ;

        long long arr[n] ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        bool check = true ;

        for(int i = 1 ; i < n -1 ; i++){

            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                check = false ;
                cout << "YES" << endl;
                cout << i << " " << i+1  << " " << i+2 << endl;
                break ;
            }

        }

        if(check){
            cout << "NO" << endl;
        }
    }
    return 0 ;

}