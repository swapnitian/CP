#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ; 

    while(T--){

        long long n ;
        cin >> n ;

        set < int > prev , total ;
        int arr[n] ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        int part_count = 0 ;

        for(int i = 0 ; i < n ; i++){
            total.insert(arr[i]) ;

            if(prev.count(arr[i])){
                prev.erase(arr[i]) ;
            }

            if(prev.size() == 0){
                part_count++ ;
                prev = total ;
            }

        }
        
        cout << part_count << endl;
    }

    return 0 ;
}