#include <bits/stdc++.h>
using namespace std ;
int main()
{   

    vector<long long> prime ;
    prime.push_back(2LL) ;
    for(long long i = 3 ; i < 110000 ; i++){
        bool f1 = true ;
        for(long long k = 2 ; k*k <= i ; k++){
            if(i%k == 0){
                f1 = false;
                break ;
            }
        }
        if(f1) prime.push_back(i) ;
    }

    // cout << 1LL*prime.size() << endl;
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector<long long> ans(n) ;

        ans[0] = 2 ;

        for(long long i = 1 ; i < n ; i++){
            ans[i] = prime[i-1]*prime[i] ;
        }
        for(long long v : ans){
            cout << v << " " ;
        }
        cout << endl; 
    }
}