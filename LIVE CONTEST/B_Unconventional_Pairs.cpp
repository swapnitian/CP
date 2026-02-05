#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n ;
        cin >> n ;

        vector<int> arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        sort(arr.begin() , arr.end()) ;

        int diff ; 

        int maxdiff = -1 ;

        for(int i = 0 ; i < n ; i = i+2){
            diff = abs(arr[i] - arr[i+1]) ;
            maxdiff = max(diff , maxdiff) ;
        }

        cout << maxdiff << endl;
    }
}