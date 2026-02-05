#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long a , b ;
        cin >> a >> b ;

        if(a == b){
            cout << 0 << endl;
        }else if(a%2 != 0 && b%2 != 0){
            cout << -1 << endl;
        }else{

            int operations = 0 ;
            int ans = 0 ;

            if(a > b){

                while(a != b){

                    if(a%2 == 0){
                        a /= 2 ; 
                        operations++ ;
                    }else{
                        break ;
                    }

                }
            }else{

                while( a != b ){
                    
                    if( a > b) break;
                    
                    a *= 2 ;
                    operations++ ;
                }
            }
            
            if(b != a){
                cout << -1 << endl;
                continue;
            }

            while(operations >= 3){
                ans++ ;
                operations -= 3 ;
            }

            while(operations >= 2){
                ans++ ;
                operations -= 2 ;
            }

            while(operations > 0){
                ans++ ;
                operations -= 1; 
            }

            cout << ans << endl;
        }

    }

}



#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ra = a;
        long long rb = b;
        while (ra % 2 == 0) // log2(a)
            ra /= 2;
        while (rb % 2 == 0) // log2(b)
            rb /= 2;

        if (ra != rb)
            cout << -1 << endl;
        else
        {
            a /= ra;
            b /= rb;
            a = log2(a); // x
            b = log2(b); // y
            long long ans = ceil(abs(a - b) / 3.0);
            cout << ans << endl;
        }
    }
    return 0;
}

// tc = O(log2(10^18)) = O(60)
// sc = O(1)