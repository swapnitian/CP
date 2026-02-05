#include <bits/stdc++.h>
using namespace std ;
int main()
{

    int T ;
    cin >> T ;

    while(T--){

        long long n ; 
        cin >> n ; 

        vector < long long > arr(n) ;
        vector<pair<long long ,long long>> v ; 
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            v.push_back({arr[i] , i}) ;
        }

        sort(arr.begin() , arr.end()) ; 
        sort(v.begin() , v.end()) ; 

        long long prefix[n]  = {0};

        long long val = 0 ;

        for(int i = 0 ; i < n ; i++){
            val += arr[i] ;
            prefix[i] = val ;
        }
        
        v[n-1].first = n-1 ;
        
        for(int i = n-2 ; i >= 0 ; i--){

            if(prefix[i] >= arr[i+1]){
                v[i].first = v[i+1].first ;
            }else{
                v[i].first = i ;
            }

        }
        
        sort(v.begin() , v.end() , [](pair<int,int> a , pair<int,int > b) {
            return a.second < b.second ;
        });


        for(auto it : v){
            cout << it.first << " ";
        }
        cout << endl;

    }

    return 0 ;
}