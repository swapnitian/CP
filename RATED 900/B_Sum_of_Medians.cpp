#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n , k ;

    while(T--){

        cin >> n >> k ;

        long long size = n*k ;

        long long arr[size] ;

        for(int i = 0 ; i < size ; i++){
            cin >> arr[i] ;
        }   

        long long score = 0 ; 

        long long idx = n/2 + 1 ; 
  
        while(k--){

            score += arr[size-idx] ; 
            size = size-idx; 

        }

        cout << score << endl;
    }
    return 0 ;
}