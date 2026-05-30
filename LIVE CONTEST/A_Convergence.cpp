#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin() , arr.end());

        int mid = arr[n/2];
        int ans = 0;
        
        int st = 0; int end = n-1;

        while(st < end){
            if(arr[st] != mid || arr[end] != mid){
                ans++;
            }
            st++;
            end--;
        }
        
        cout << ans << endl;
    }
}