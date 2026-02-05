#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    while(T--){
        /* code */
        int n ;
        cin >> n ; 
        long long arr[n] ;

        for( int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        sort(arr , arr+n) ;
    
        if(arr[0] == arr[n-1]){
            cout << -1 << endl;
        }else{
            vector < long long > b , c ;

            c.push_back(arr[n-1]) ;
            b.push_back(arr[0]) ;

            for( int i = n-2 ; i > 0 ; i--){
                if(arr[i] >= c[0]){
                    c.push_back(arr[i]) ;
                }else{
                    b.push_back(arr[i]) ;
                }
            }

            cout << b.size() << " " << c.size() << endl;
            
            for(auto val : b){
                cout << val << " " ;
            }
            
            cout << endl; 

            for( auto v : c){
                cout << v << " " ;
            }

            cout << endl;
        }

    }
    return 0 ; 
}