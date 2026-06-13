#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        vector<long long>arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(), arr.rend());

        if(n == 2){
            cout << arr[0] << " " << arr[1] << endl;
            continue;
        }
        bool f1 = true;

        for(int i = 0; i < n-2; i++){
            int val = (arr[i]%arr[i+1]);

            if(val != arr[i+2]){
                cout << -1 << endl;
                f1 = false;
                break;
            }
        }

        if(f1) cout << arr[0] << " " << arr[1] << endl;
    }
}