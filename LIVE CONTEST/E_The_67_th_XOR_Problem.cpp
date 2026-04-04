#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector<int> arr(n) ;
        set<int> s ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        int maxi = INT_MIN ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                if(i == j) continue; 

                maxi = max(maxi , arr[i]^arr[j]) ;
            }
        }

        cout << maxi << endl;
    }
}