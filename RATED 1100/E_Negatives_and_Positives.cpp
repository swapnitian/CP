#include <bits/stdc++.h>
using namespace std ;
void solve(){
    int n ;
    cin >> n ;

    long long arr[n] ;

    for(int i = 0 ; i < n; i++){
        cin >> arr[i] ;
    }
    long long total_sum = 0 ;
    int cnt = 0 ; int mini = INT_MAX ;

    for(int i = 0 ; i<n ; i++){
        total_sum += abs(arr[i]) ;
        if(arr[i] < 0) cnt++ ;
        mini = min(mini*1LL , abs(arr[i])) ;
    }

    if(cnt&1) cout << total_sum - 2*mini << endl;
    else cout << total_sum << endl;

}
int main()
{
    int T ;
    cin >> T ;
    while(T--){
        solve() ;
    }
}