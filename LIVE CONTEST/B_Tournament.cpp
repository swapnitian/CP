#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >>T ;

    while(T--){

        long long n , j , k ; 
        cin >> n >> j >> k ;

        long long arr[n] ;
        j-- ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        
        long long element = arr[j] ;

        sort(arr , arr+n) ;

        if(k > 1 && element >= arr[0]){
            cout << "YES" << endl;
        }else if(element == arr[n-1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}