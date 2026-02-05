#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ; 
        cin >> n ; 

        vector<vector<int>>arr(n , vector<int>(n,0)); 
        
        int final_sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                arr[i][j] = (n*i) + j+1 ;
            }
        }
        int delrow[4] = {-1 , 0 , 1 , 0} ;
        int delcol[4] = {0 , 1 , 0 , -1} ;
        
        int row[4] = {-2 , -2 , -1 , -1} ;
        int col[4] = {-2 , -1  , -2 , -1} ;

        for(int i = 0 ; i < 4 ; i++){
            int r = n+row[i] ; int c = n+col[i] ;

            if(r < 0 || c < 0) continue ;

            int sum = arr[r][c] ;

            for(int j = 0 ; j < 4 ; j++){
                int nr = r + delrow[j] ; int nc = c + delcol[j] ;
            
                if(nr >= 0 && nr < n && nc >= 0 && nc < n){
                    sum += arr[nr][nc] ;
                }
                final_sum = max(final_sum , sum) ;
            }
        }

        cout << final_sum << endl;
    }
}
