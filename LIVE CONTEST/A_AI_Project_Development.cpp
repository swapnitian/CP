#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n,x,y,z;
        cin >> n >> x >> y >> z;

        // without Ai
        long long ans1 ;
        for(int h = 1; h <= 10000; h++){
            if((x+y)*h >= n){
                ans1 = h;
                break;
            }
        }
        // Ai
        long long ans2 = z;
        n = n-(x*z);
        if(n <= 0){
            cout << min(ans2 , ans1) << endl;
            continue;
        }

        for(int h = 1; h <= 10000; h++){
            if((x + (10*y))*h >= n){
                ans2 += h;
                break;
            }
        }
        cout << min(ans2 , ans1) << endl;
    }
}