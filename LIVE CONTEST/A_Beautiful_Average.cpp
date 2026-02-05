#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ; 
        cin >> n ; 

        int arr[n] ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        
        int max_avg = 0 ;

        for(int i = 0 ; i < n ; i++){
            int sum = 0 ;
            for(int j = i ; j < n ; j++){
                sum += arr[j] ;
                int d = j-i+1 ;
                max_avg = max(max_avg , sum/d) ;
            }
        }
        
        cout << max_avg << endl;
    }

}