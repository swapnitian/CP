#include <bits/stdc++.h>
#include <numeric>
using namespace std ;
int main()
{   

    vector<long long> prime_no ;
    bool flag = true ;
    for(long long i = 3 ; i <= 1000 ; i++){
        bool flag = true ;
        for(long long j = 2 ; j < i ; j++){
            if(i%j == 0){
                flag = false ;
                break ;
            }
        }
        if(flag) prime_no.push_back(i) ;
    }
    int T ;
    cin >> T ;

    while(T--){
        long long n ;
        cin >> n ;

        long long arr[n] ;
        int odd = 0 ; int even = 0 ;

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            if(arr[i]%2 == 0){
                even++ ;
            }else odd++ ;
        }

        if(odd > 0){
            cout << 2 << endl;
        }else{
            long long size = prime_no.size() ;
            bool f1 = false ;
            for(int i = 0; i < size ; i++){
                for(int j = 0 ; j < n ; j++){
                    if(__gcd(prime_no[i] , arr[j]) == 1){
                        cout << prime_no[i] << endl;
                        f1 = true ;
                        break;
                    }
                }
                if(f1) break ;
            }
        }
    }

}