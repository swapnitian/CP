#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n ; 

    while(T--){
        cin >> n ;

        vector< long long >arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        vector <long long> copy = arr ;
        sort(arr.begin() , arr.end()) ;

        if(copy != arr){
            cout << 0 << endl;
        }else{
            int MIN = INT_MAX ;

            for( int i = 0 ; i < n-1 ; i++){
                int sum = arr[i+1] - arr[i] ;
                MIN = min(MIN , sum) ;
            }
 
            cout << (MIN)/2 + 1 << endl;
            
        }
        
    }
    return 0 ;
}