#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--) {
        ll n , c;
        cin >> n >> c;
        vector<ll> arr(n);
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
        }

        // binary search on the answer 

        ll st = 1 ; ll end = 1e9 ;

        while(st <= end){
            ll mid = st + (end-st)/2;
            ll sum = 0;
            for(ll i = 0; i < n; i++){
                sum += (arr[i] + 2*mid) * (arr[i] + 2*mid);
            
                if(sum > c)break;
            }

            if(sum == c){
                cout << mid << endl;
                break;
            }

            if(sum  > c){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
    }

}