#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n ;
    cin >> n ;
    
    int arr[n] ;
    int maxi = 0 ;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
        maxi = max(maxi , arr[i]) ;
    }
    cout << n*maxi << endl;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
}