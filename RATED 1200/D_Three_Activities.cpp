#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n ;
        cin >> n;

        vector<pair<ll ,ll>> v1(n) , v2(n) , v3(n);

        for(int i = 0; i < n; i++){
            int val ;
            cin >> val;
            
            v1.push_back({val , i});
        }
        for(int i = 0; i < n; i++){
            int val ;
            cin >> val;
            
            v2.push_back({val , i});
        }
        for(int i = 0; i < n; i++){
            int val ;
            cin >> val;
            
            v3.push_back({val , i});
        }
        
        sort(v1.rbegin() , v1.rend());
        sort(v2.rbegin() , v2.rend());
        sort(v3.rbegin() , v3.rend());

        ll ans = 0;

        for(int i = 0 ; i < 3 ; i++){
            ll d1 = v1[i].second;
            for(int j = 0 ; j < 3 ; j++){
                ll d2 = v2[j].second;

                if(d1 == d2) continue;

                for(int k = 0; k < 3; k++){
                    ll d3 = v3[k].second ;

                    if(d1 == d3 || d3 == d2) continue; 

                    ll val = v1[i].first + v2[j].first + v3[k].first;

                    ans = max(ans , val);
                }
            }
        }

        cout << ans << endl;
    }
}