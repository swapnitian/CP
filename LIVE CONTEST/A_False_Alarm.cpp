#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n , x ;

    while(T--){
        cin >> n >> x ; 

        long long arr[n] ;

        for(int i = 0 ; i< n ; i++){
            cin >> arr[i] ;
        }

        if(x >= n){
            cout << "YES" << endl;
        }else {
            int idx ; 
            for(int i = 0 ; i < n ; i++){

                if(arr[i] == 1){
                    idx = i ;
                    while(x--){
                        idx++ ;
                    }
                    break ;
                }

            }
            bool check = true ;
            for(idx ; idx < n ; idx++){

                if(arr[idx] == 1){
                    check = false ;
                    break;
                }

            }

            if(check){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }

        }
    }
    return 0 ;
}