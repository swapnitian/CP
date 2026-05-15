#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{   
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        ll m = (n*(n-1))/2;

        vector<ll> arr(m);
    
        for(int i = 0 ; i < m ; i++){
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());
        
        for(int i = 0; i < m; i += n){
            cout << arr[i] << " ";
        }
        cout << 1000000000 << endl;
    }


}