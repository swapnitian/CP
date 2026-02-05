#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ;

        set < long long > s ;
        long long a ;

        for(int i = 0 ; i < n ; i++){
            cin >> a ;
            s.insert(a) ;
        }

        if(s.size() != n){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0 ;
}
