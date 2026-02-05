#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
    long long n ;
    cin >> n ;

    long long arr[n] ;
    bool check = true ;

    for(long long i= 0 ; i< n ; i++){
        cin >> arr[i] ;
        if(arr[i] == 0){
            cout << 0 << endl;
            check = false ;
            break ;
        }
        if( arr[i] < 0 ){
            arr[i] = -arr[i] ;
        }
    }

    if(check){
        sort(arr , arr+n) ;

        long long min = arr[0] ;
        
        cout << min << endl; 
    }
    return 0 ;

}