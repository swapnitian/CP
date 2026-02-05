#include <iostream> 

using namespace std ;
int main()
{
    int T ; 
    cin >> T ; 
    int n ; 
    while(T--){

        cin >> n ; 

        int k = 0 ;
        int l = 0 ;
        int a ; 
 
        for( int i = 0 ; i < n ; i++){

            cin >> a ; 

            if( a == 1 ){
                k++ ; 
            }else{
                l++ ;
            }

        }

        int ans = 0 ;
        while( k < l || l%2 == 1){
            k++;
            l--;

            ans++ ;
        }
        cout << ans << endl;
        
        
    }
}