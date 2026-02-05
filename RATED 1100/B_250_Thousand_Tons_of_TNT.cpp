#include <bits/stdc++.h>
using namespace std ;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  T ;
    cin >> T ;

    while(T--){
        long long n ;
        cin >> n ;

        vector<long long>arr(n) , prefix(n+1 , 0) ;

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }

        if(n == 1){
            cout << 0 << "\n";
        }
        else{
            
            long long ans = LLONG_MIN ; 
        
            for(int i = 0 ; i < n ; i++){
                prefix[i+1] = prefix[i] + arr[i] ;
            }

            for(long long i = 1 ; i*i <= n ; i++){
                if(n%i != 0)continue ;

                long long d1 = i ; long long d2 = n/i ;

                for(long long x : {d1,d2}){
                    if(x < 2) continue; 

                    long long k = n/x ;
                    long long  count = 0 ;
                    long long sum_max = LLONG_MIN ; 
                    long long sum_min = LLONG_MAX ;
                    // we will use prefix to handle speed and TLE ;

                    for(long long j = 0 ; j < n ; j += k){
                        long long currsum = prefix[j+k] - prefix[j];

                        sum_max = max(sum_max , currsum) ;
                        sum_min = min(sum_min , currsum) ;
                    }
                    ans = max(llabs(sum_max - sum_min) , ans) ;
                }
            }
            cout << ans << "\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ;
        
        vector<long long>arr(n) ;

        for(long long i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        
        
        if(n == 1){
            cout << 0 << endl;
            continue; 
        }
        
        long long ans = LLONG_MIN ; 
        
        for(int i = 2 ; i <= n ; i++){
            if(n%i != 0)continue ;

            int k = n/i ;
            int count = 0 ;
            long long sum1 = LLONG_MIN ; 
            long long sum2 = LLONG_MAX ;
            long long currsum = 0 ;
            for(int j = 0 ; j < n ; j++){
                if(count == k){
                    count = 0 ;
                    currsum = 0 ;
                }
                currsum += arr[j] ;
                count++ ;
                if(count == k){
                    sum1 = max(sum1 , currsum) ;
                    sum2 = min(sum2 , currsum) ;
                }
            }
            ans = max(llabs(sum1 - sum2) , ans) ;
        }
        cout << ans << endl;
    }
}