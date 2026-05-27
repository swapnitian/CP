#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--){
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        unordered_map<ll,ll> cnt , sum;

        for(int i = 0; i < n; i++){
            ll operations = 0;
            ll val = arr[i];

            vector<ll> path;

            while(true){
                
                if(find(path.begin() , path.end() , val) != path.end()) break;

                path.push_back(val);

                sum[val] += operations;
                cnt[val]++;
            
                if(val&1){
                    val++;
                }else{
                    val = val/2;
                }
                operations++;
            }
        }
        ll ans = 1e18;
        for(auto it : cnt){
            if(it.second == n){
                ans = min(ans , sum[it.first]);
            }
        }
        cout <<  ans << endl;
    }

}