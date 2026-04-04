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
        vector<int> freq(2e5 +1 , 0) ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
            s.insert(arr[i]) ;
            freq[arr[i]]++ ;
        }
        // cout << freq[1] << endl;
        auto it = s.rbegin() ;
        int operations = 0 ;
        // for(auto v : s){
        //     cout << v << " " ;
        // }
        for(int i = n-1 ; i >= 0 ; i--){
            if(arr[i] == *it){
                operations++ ;
                freq[*it]-- ;
    
                if(freq[*it] == 0){
                    s.erase(*it) ;
                    it = s.rbegin() ;
                }
            }else{
                freq[arr[i]]-- ;
                
                if(freq[arr[i]] == 0){
                    s.erase(arr[i]) ;
                }
            }
        }
        // cout << freq[1] << endl;
        // for(auto v : s){
        //     cout << v << " " ;
        // }
        cout << operations << endl;
    }
}