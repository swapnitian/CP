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

        int countve = 0 ;
        int count_0 = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(arr[i] == -1) countve++ ;
            if(arr[i] == 0) count_0++ ;
        }
        
        countve = countve%2 ;

        cout << countve*2 + count_0*1 << endl;

    }

}