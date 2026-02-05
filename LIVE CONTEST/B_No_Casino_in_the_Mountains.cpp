#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >>T  ;

    while(T--){

        long long  n , k ;
        cin >> n >> k ;

        long long arr[n] ;

        long long count_1 = 0 ;

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            if(arr[i] == 1){
                count_1++ ;
            }
        }

        if(count_1 == n){
            cout << 0 << endl;
        }else{

            int count = 0 ;
            int hike = 0 ;

            for(int i = 0 ; i < n ; i++){

                if(arr[i] == 0){
                    count++ ;
                }else{
                    count = 0 ;
                }

                if(count == k){
                    hike++ ;
                    i++ ;
                    count = 0 ;
                }   
            }

            cout << hike << endl;

        }


    }
}