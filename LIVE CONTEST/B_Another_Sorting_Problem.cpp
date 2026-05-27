#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(vector<ll> &arr , ll diff){
    vector<ll> copy = arr;
    int n = arr.size();
    
    for(ll i = 0; i < n-1; i++){
        if(copy[i] > copy[i+1]){
            copy[i+1] += diff;
        } 
    }

    for(ll i = 0; i < n-1; i++){
        if(copy[i] > copy[i+1]){
            return false;
        }
    }
    return true;
}
int main()
{
    int T;
    cin >> T;

    while(T--){
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        ll diff = -1e9;

        for(ll i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                diff = max(diff , arr[i] - arr[i+1]); 

            }
        }
        
        if(diff == -1e9){
            cout << "YES\n";
            continue;
        }

        if(check(arr, diff)){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }

}