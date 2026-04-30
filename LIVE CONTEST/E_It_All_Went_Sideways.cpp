#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n;

        vector<int> v(n) ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        
            sum += v[i] ;
        }
        int min_v = 0 ;
        int idx = 0 ;

        if(v[n-1] == 1) cout << sum-1 << endl;
        else if(n == 2){
            if(v[0] > v[1]){
                cout << v[0]-v[1] + 1 ;
            }else {
                cout << 0 << endl;
            }
        } 
        else{
            for(int i = n-2 ; i > 0 ; i--){
                if(v[i] < v[i+1] && v[i] <= v[i-1]){
                    min_v = v[i]-1 ;
                    idx = i ;
                    break;
                }
            }
            int moves = 0 ;
            for(int i = 0 ; i < idx ; i++){
                if(v[i] > min_v) {
                    moves += v[i] - min_v ;
                }
            }
            cout << moves << endl;
        }

    }
}