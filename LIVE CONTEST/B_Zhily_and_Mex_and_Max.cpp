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
        
        set<ll> s;
        ll maxi = -1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];

            s.insert(arr[i]); 
        
            maxi = max(maxi , 1LL*arr[i]);
        }
        // now finding the mex of whole array;
        ll mex = n;
        for(int i = 0; i < n; i++){
            if(s.find(i) == s.end()){
                mex = i;
                break;
            }
        }
        sort(arr.begin() , arr.end());
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < mex){
                sum += (arr[i]+1) + arr[i];
            }else if(arr[i] > mex){
                sum += mex + maxi;
            }
        }

        cout << sum << endl;
    }   
}