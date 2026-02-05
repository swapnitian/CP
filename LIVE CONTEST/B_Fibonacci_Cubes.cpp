#include <bits/stdc++.h>
using namespace std ;



int main()
{
    int T ;
    cin >> T ;

    int n ; 
    long long m ;
    long long w , l ,h ; 

    while(T--){
        cin >> n >> m ;
       

        int arr[10] = { 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 ,89} ;
        long long  cube[10] = { 1 , 8 , 27 , 125 , 512 , 2197 , 9261 , 39304 , 166375 , 704969} ;

        long long volume_cubes = 0 ;

        string ans = ""; 

        // calculating volumes of cubes

        for(int i = 0 ; i < n ; i++){
            volume_cubes += cube[i] ;
        }


        for(int i = 0 ; i < m ; i++){
            cin >> w >> l >> h ;
            bool check = true ;
            long long volume_box = w*l*h ;

            for( int j = 0 ; j < n ; j++){

                if( w < arr[j] || l < arr[j] || h < arr[j]){
                    ans += '0' ;
                    check = false ;
                    break ;
                }               
            }

            if(check){

                if(volume_box > volume_cubes){
                    ans += '1' ;
                }else{
                    ans += '0' ; 
                }
            }

        }

        cout << ans << endl;
    }
}
