#include <iostream>
#include <algorithm>
using namespace std ;

int main()
{
    int T ; 
    cin >> T ;

    int n ; 
    while(T--){
        cin >> n ;

        int arr[n] ;

        for( int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        sort(arr , arr + n) ;
        
        int min1 = arr[0]; 
        int max1 = arr[n-1] ;

        if( (min1+max1)%2 == 0){
            cout << 0 << endl;
        }else if( n == 1 || n == 2 || n == 3){
            cout << 1 << endl;
        }else{
            int ans1 , ans2 ;
            
            // fix max value 
            for( int i = 1 ; i < n ; i++){
                if((arr[i]+max1)%2 == 0){
                    ans1 = i ;
                    break ;
                }
            }
            // fix min  value 
            for( int i = n-1 ; i >= 0 ; i--){
                if( (arr[i]+min1)%2 == 0 ){
                    ans2 = n-1-i ;
                    break ;
                }
            }
            int Ans = min(ans1 , ans2) ;
            
            cout << Ans << endl;
        }
    }

}