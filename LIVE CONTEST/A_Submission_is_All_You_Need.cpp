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

        int check_0 = 0 ;

        long long sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        
            if(arr[i] == 0){
                check_0++ ;
            }

            sum += arr[i] ;

        }

        if(check_0 > 0){
            cout << check_0 + sum << endl;
        }else{
            cout << sum << endl;
        }

    }
}