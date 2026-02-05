#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int T ;
    cin >> T ;

    while(T--){

        long long n ; long long c ;
        cin >> n >> c ;

        long long arr[n] ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        sort(arr , arr + n) ;

        long long db = 1 ;
        long long ans = 0 ;

        for(int i = n-1 ; i >= 0 ; i--){
            
            if(arr[i] <= c){

                if(db*arr[i] > c){
                    ans++ ;
                }else{
                    db *= 2 ;
                }

            }else{
                ans++ ;
            }
            
        }

        cout << ans << endl;
    }

}