#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        int n , k ; 
        cin >> n >> k ;

        set <int> s ;
        vector<int> arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        int element = arr[k-1] ;

        for(auto val : arr){
            if(val >= element){
                s.insert(val) ;
            }
        }   

        int prev = element ;
        bool check = true ;

        for(auto v : s){
            if(v - prev > element){
                check = false ;
                break ;
            }
            prev = v ;
        }

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl; 

    }

    return 0 ;
    
}