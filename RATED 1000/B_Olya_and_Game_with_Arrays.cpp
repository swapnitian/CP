#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , n1 ;
        cin >> n ;
        n1 = n ;

        long long m ;
        vector<long long>ans ;
        long long maximum = 0;
        long long MIN = INT_MAX ;
        while(n1--){

            cin >> m ; 
            long long arr[m] ;

            for(int i = 0 ; i < m ; i++){
                cin >> arr[i] ;
            }

            sort(arr , arr+m) ;

            MIN = min(MIN , arr[0]) ;
            maximum += arr[1] ;
            ans.push_back(arr[1]) ;
        }
        sort(ans.begin() , ans.end()) ; 

        maximum = maximum - ans[0] + MIN ;

        cout << maximum << endl;
    }
    return 0 ;
}