#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        long long n ; 
        cin >> n ;

        vector<long long> arr(n) ;
        multiset < long long > ms ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        vector<long long > help ;
        vector<long long> ans(n , 0) ;
        help.push_back(arr[n-1]) ;
        for(int i = n-2  ; i >= 0 ; i--){
            auto it = upper_bound(help.begin() , help.end() , arr[i]) ;
            if(it == help.end()){
                ans[i] = help.size() ;
            }else{
                long long val = help.end()-it ;
                ans[i] = max((long long)help.size() - val , help.end()-it) ;
            }
            help.push_back(arr[i]) ;
            sort(help.begin() , help.end()) ;
        }
        for(int i = 0 ; i < n ; i++){
            cout << ans[i] << " " ;
        }
        cout << endl;
    }

}