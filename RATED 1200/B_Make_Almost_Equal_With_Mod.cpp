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

        vector<ll> arr(n);
        ll cntO = 0; ll cntE = 0;
        for(int i = 0;i <n; i++){
            cin >> arr[i];

            if(arr[i]&1) cntO++;
            else cntE++;
        }

        if(cntE > 0 && cntO > 0) cout << 2 << endl;
        else{
            for(int i = 1 ; i <= 60; i++){
                ll val = pow(2 , i);
                set<ll> s;
                for(int j = 0 ; j < n ; j++){
                    s.insert(arr[j]%val);
                }

                if(s.size() == 2){
                    cout << val << endl;
                    break;
                }

            }
        }
    }
}