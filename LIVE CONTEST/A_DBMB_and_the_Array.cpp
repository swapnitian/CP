#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n , s , x ;
    cin >> n ;
    cin >> s >> x ;

    int arr[n] ;
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;

        sum += arr[i] ;
    }
    // cout << sum << endl;
    if(sum == s){
        cout << "YES" << endl;
        return ;
    }
    while(sum <= s){
        if(sum == s){
            cout << "YES" << endl;
            return ;
        }
        sum += x ;
    }
    // cout << sum << endl;
    cout << "NO" << endl;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
}