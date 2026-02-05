#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long a, b ;
        cin >> a >> b ;

        long long operations = 0 ;
        long long ans = INT_MAX; 

        for(int addition = 0 ; addition < 32 ; addition++){   // worst case if a = 10^9 and b = 1 there will be some 31 operations to make a = 0 
            
            operations = addition ;
            long long new_b = b + addition ;

            if(new_b == 1) continue;

            long long copy_a = a ;

            while(copy_a > 0){
                copy_a/= new_b ;
                operations++ ;
            }

            ans = min(ans , operations) ;
        }

        cout << ans << endl;
    }
    return 0 ;
}