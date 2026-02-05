#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n , k;
        cin >> n >> k ;

        int arr[n] ;

        set<int> s ;
        int count = 0 ;

        for(int i =0 ; i < n ; i++){
            cin >> arr[i] ;

            s.insert(arr[i]) ;
            
            if(arr[i] == k) count++ ;
        }

        int miscount = 0;

        for(int i = 0 ; i < k ; i++){
            if(s.find(i) == s.end()){
                miscount++ ;
            }
        }


        cout << max(miscount , count) << endl;
    }
}