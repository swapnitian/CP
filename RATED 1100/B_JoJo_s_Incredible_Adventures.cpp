#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
ll maxlength(string &s , ll &n , ll &maxi){
    ll cnt1 = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            cnt1++;
            maxi = max(maxi , cnt1);
        }else{
            cnt1 = 0;
            
        }
    }

    return maxi;
}
int main()
{
    int T;
    cin >> T; 

    while(T--){
        string s;
        cin >> s;
        ll n = s.size();

        ll cnt1 = 0;
        ll maxi = 0;

        for(ll i = 0; i < n ; i++){
            if(s[i] == '1')cnt1++;
        }
                
        if(n == cnt1){
            cout << n*n << endl;
            continue;
        }

        if(cnt1 == 0){
            cout << 0 << endl;
            continue;
        }

        if(s[0] == '1' && s[0] == s[n-1]){
            s += s;
            n = s.size();

            maxi = maxlength(s , n , maxi);
        }else{
            maxi = maxlength(s , n , maxi);
        }

        ll ans = ((maxi+1)/2) * ((maxi+2)/2);
    
        cout << ans << endl;
    }
}