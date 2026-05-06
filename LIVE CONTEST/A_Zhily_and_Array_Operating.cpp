#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >>T ;

    while(T--){
        int n ;
        cin >> n;

        vector<long long> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int cnt = (arr[n-1] > 0 ? 1 : 0);

        for(int i = n-2 ; i >= 0 ; i--){
            if(arr[i] <= 0){
                arr[i] = arr[i] + arr[i+1];

                if(arr[i] > 0)cnt++;
            }else{
                if(arr[i+1] >= 0){
                    arr[i] += arr[i+1];
                }
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}