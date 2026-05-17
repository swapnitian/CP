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

        // we are using the UNIQUE STL which removes the consecutive duplicates elements only left with 1;
        
        n = unique(arr.begin() , arr.end()) - arr.begin();
        int ans = n;
        // now we will remove the increasing or decreasing part from the array -- 


        for(int i = 0; i < n-2; i++){
            if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2]){
                ans--;
            }else if(arr[i] > arr[i+1] && arr[i+1] > arr[i+2]){
                ans--;
            }
        }

        cout << ans << endl;
    }
}