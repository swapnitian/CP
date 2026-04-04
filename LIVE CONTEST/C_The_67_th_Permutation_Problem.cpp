#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector<int> arr(3*n) ;

        for(int i = 0 ; i < 3*n ; i++){
            arr[i] = i+1 ;
        }
        sort(arr.rbegin() , arr.rend()) ;
        
        int no = 1 ;
        int it = 0 ;
        vector<int> ans ;
        for(int i = 0 ; i < 3*n ; i++){
            if((i+1)%3 == 0){
                ans.push_back(no) ;
                no++ ;
            }else{
                ans.push_back(arr[it]) ;
                it++ ;
            }
        }
        
        for(int v : ans){
            cout << v << " " ;
        }
        cout << endl;
    }
}