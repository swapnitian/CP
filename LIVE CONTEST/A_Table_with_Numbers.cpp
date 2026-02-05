#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n ;
    cin >> n ;
    int h , l; 
    cin >> h >> l ;
    int arr[n] ;
    
    for(int i = 0 ; i <n ; i++) cin >> arr[i] ;

    int cnt_h = 0 ; int cnt_l = 0 ;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] <= h) cnt_h++ ;
        if(arr[i] <= l) cnt_l++ ;
    }

    if(cnt_l > cnt_h) swap(cnt_h , cnt_l) ;

    cout << min(cnt_l , cnt_h/2) << endl; 
    
}
int main()
{
    int T ;
    cin >> T ;
    while(T--){
        solve() ;
    }
}



