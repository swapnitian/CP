#include <iostream>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;
    
    int n ; 

    while(T--){

        cin >> n ;

        long long arr[n] ;
        int freq_2 = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ; 

            if( arr[i] == 2){
                freq_2++ ;
            }
        }

        if(freq_2 == 0){
            cout << 1 << endl;
        }else if( freq_2%2 != 0){
            cout << -1 << endl;
        }else{
            
            // here to avoid integer overflow condition we are using prefix calculation 

            int curr_2 = 0 ;
            
            for(int k = 0 ; k < n - 1 ; k++){

                if(arr[k] == 2){
                    curr_2++;
                }    

                if( curr_2 == freq_2-curr_2){
                    cout << k+1 << endl;
                    break;
                }
            }
        }
    }
    return 0 ;
}