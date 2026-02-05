#include <bits/stdc++.h>
using namespace std ; 
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , k ; 

        cin >> n >> k ; 

        long long x ;
        vector<pair<long long , long long>> v ;

        for(long long i = 0 ; i < n ; i++){
            cin >> x ;

            x = x%k ;

            if(x == 0){
                x = k ;
            }
            v.push_back({x , i+1}) ;
        }   

        sort(v.begin() , v.end() , [](pair<long long , long long>a , pair<long long , long long>b) {
            if(a.first != b.first) 
                return a.first > b.first ;
            return a.second < b.second ;    
        });

        for(auto val : v){
            cout << val.second << " "  ;
        }

        cout << endl;

    }
    return 0 ; 
}