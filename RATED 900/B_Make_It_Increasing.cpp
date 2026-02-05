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
        int moves = 0 ;

        for(int i = n-1 ; i > 0  ; i--){

            while(arr[i-1] >= arr[i]){
                
                if(arr[i-1] == 0) break ;
                
                arr[i-1] /= 2 ;
                moves++ ;
            }

            if(arr[i-1] == 0 && arr[i] == 0){
                moves = -1 ;
                break;
            }

        }

        cout << moves << endl;
        
    }

}