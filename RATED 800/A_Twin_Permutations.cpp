#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ; 

    int n ; 

    while( T--){

        cin >> n ; 

        vector < int > arr(n) ;
        int a ; 

        for( int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        // logic -> here we take element of b as  = n+1-a[i] we think to make elements equal 

        for( int i = 0 ; i < n ; i++){
            cout << n+1-arr[i] << " ";
        }

        cout << endl;
    }
}