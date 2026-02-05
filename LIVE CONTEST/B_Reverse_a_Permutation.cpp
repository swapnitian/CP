#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n ; 
    cin >> n ;

    vector<int> arr(n) ;

    for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

    int idx = 0 ; 
    int maxi = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != n-i){
            idx = i ;
            break ;
        }
    }
    int idx2 = 0 ;
    for(int i = idx ; i < n ; i++){
        if(maxi < arr[i]){
            maxi = arr[i] ;
            idx2 = i ;
        }
    }
    reverse(arr.begin()+idx , arr.begin()+idx2+1) ;
    // cout << mxidx << endl;
    for(auto it : arr){
        cout << it << " " ;
    }
    cout << endl;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
    cout << __builtin_popcount(233) << endl;

}

