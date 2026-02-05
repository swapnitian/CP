#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >>T ;

    while(T--){

        long long n ;
        cin >> n ;

        vector < int > arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        sort(arr.rbegin() , arr.rend()) ;

        for(auto v : arr){
            cout << v << " " ;
        }
        cout << endl ;
    }
}