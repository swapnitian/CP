#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n , q ; 
    cin >> n >> q ;

    vector<int> a(n) , b(n);

    int max_a = 0 ; int max_b = 0 ;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i] ;
    }

    for(int i =0  ; i <n ; i++){
        if(a[i] < b[i]){
            a[i] = b[i] ;
        }
    }
    int maxi = a[n-1] ;
    for(int i = n-2 ; i >= 0 ; i--){
        if(a[i] > maxi){
            maxi = a[i] ;
        }else if(a[i] < maxi){
            a[i] = maxi ;
        }
    }
    vector<int> prefix(n+1 , 0) ;

    for(int i = 1 ; i <= n ; i++){
        prefix[i] = prefix[i-1] + a[i-1] ;
    }

    // for(int i = 0 ; i < n ; i++){
    //     cout << a[i] << " " ;
    // }
    // cout << endl;

    // for(int i = 0 ; i <= n ; i++){
    //     cout << prefix[i] << " " ;
    // }
    // cout << endl;
    while(q--){
        int l , r ;
        cin >> l >> r ;
        l ; r ;
        int sum = 0 ;
        
        sum = prefix[r] - prefix[l-1] ;
        
        cout << sum << " " ;
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
}