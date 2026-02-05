#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , p ;
        cin >> n >> p ;

        long long arr[n] ;

        vector<pair<int , int >> cost(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        int a ; 
        for(int i = 0 ; i < n ; i++){
            cin >> a ;

            cost[i] = {a , arr[i]} ;
        }
        long long mincost = p ; 
        long long already_shared = 1 ;

        sort(cost.begin() , cost.end()) ;   
        
        for(auto it : cost){

            long long can_shared = it.second ;
            long long cost = it.first ;

            if(cost >= p) break ;

            if(already_shared + can_shared > n){
                mincost += (n-already_shared)*(cost) ;
                already_shared = n ;
                break ;
            }else{
                mincost += can_shared*cost ;
                already_shared += can_shared ;
            }

        }
        mincost += (n-already_shared)*p ; 
        cout <<  mincost << endl;
    }
    return 0 ;
}