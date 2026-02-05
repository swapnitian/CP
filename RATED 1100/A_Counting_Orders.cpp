#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;
        int mod = 1e9+ 7 ;
        vector<int>a(n), b(n) ;

        for(int i =0 ; i < n ; i++) cin >> a[i] ;
        for(int i =0 ; i < n ; i++) cin >> b[i] ;

        sort(a.begin() , a.end()) ;
        sort(b.rbegin() , b.rend()) ;

        bool f1 = false ;

        long long ans = 1 ;
        for(int i = 0 ; i < n ; i++){
            auto it = upper_bound(a.begin() , a.end() , b[i]) ;

            if(it == a.end()){
                f1 = true ;
                break ;
            }else{
                long long count = n-(it-a.begin()) ;
                ans = (ans%mod)*(count-i) ;
            }
        }
        if(f1) cout << 0 << endl;
        else cout << ans%mod << endl;

    }
}