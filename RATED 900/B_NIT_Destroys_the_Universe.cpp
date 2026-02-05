#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;

    long long n ;

    while(T--){
        cin >> n ;

        vector<long long>arr(n) ;

        long long freq_0 = 0 ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            if(arr[i] == 0){
                freq_0++;
            }
        }

        bool check = false ;

        long long left = 0 , right = arr.size() -1 ;

        while(arr[left] == 0){
            left++ ;
        }

        while(arr[right] == 0){
            right-- ;
        }

        for(left ; left <= right ; left++){
            if(arr[left] == 0){
                check = true ;
            }
        }

        if(freq_0 == arr.size()){
            cout << 0 << endl;
        }else if(!check){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

    }
    return 0 ;
}