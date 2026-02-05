#include <bits/stdc++.h>
using namespace std ;

bool check(vector<long long> &arr){

    for( int i = 1 ; i < arr.size() ; i++){

        if(arr[i]%arr[i-1] == 0) return false ;
    }
    return true ;
}
int main()
{
    int T ;
    cin >> T ;

    int n ; 

    while(T--){
        cin >> n ;

        vector<long long> arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        if(check(arr)){
            for(int val : arr){
                cout << val << " " ;
            }
            cout << endl;
        }else{

            for(int i = 0 ; i < n ; i++){
                arr[i] += 1 ;
            }

            for( int i =1 ; i< n ; i++){

                if( arr[i] % arr[i-1] == 0 ){
                    arr[i] = arr[i]+1 ;
                }

            }

            for(int val : arr){
                cout << val << " " ;
            }
            cout << endl;

        }

    }
}