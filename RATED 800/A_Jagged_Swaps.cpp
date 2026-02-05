#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std ;

int main()
{
    long long T ;
    cin >> T ;
    int n ; 

    while(T--){
        cin >> n ;
        vector<int>arr(n) ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        vector<int>copy = arr ; 
        sort(copy.begin() , copy.end()) ;

        // checking if it is possible to make array sorted 

        if(arr[0] == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


        //  M E T H O D - 2 - - 

        // for( int i=1 ; i < n-1 ; i++){
        //     if( arr[i] > arr[i-1] && arr[i] > arr[i+1]){
        //         swap(arr[i] , arr[i+1]) ;
        //         i = 0 ;
        //         
        //     }
        // }

        // if(copy == arr){
        //     cout << "YES" << endl;
        // }else{
        //     cout << "NO" << endl;
        // }
    }
    return 0 ;
}