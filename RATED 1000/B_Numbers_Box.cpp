#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T;

    while(T--){

        int n , m ;
        cin >> n >> m ;

        long long  grid[n][m] ;

        int neg_count = 0 ;
        long long sum = 0 ;
        long long min_value = INT_MAX ;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> grid[i][j] ;

                if(grid[i][j] <= 0){
                    neg_count++ ;
                }

                if(grid[i][j] < 0){
                    grid[i][j] = -grid[i][j] ;
                }


                min_value = min(min_value , grid[i][j]) ;
                sum += grid[i][j] ;
            }
        }

        if(neg_count %2 == 0){
            cout << sum << endl;
        }else{
            cout << sum- 2*(min_value) << endl;
        }
        
    }
    return 0 ;
}

