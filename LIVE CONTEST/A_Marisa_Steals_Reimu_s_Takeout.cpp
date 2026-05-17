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

        int cnt0 = 0 ; int cnt1 = 0; int cnt2 = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(arr[i] == 0)cnt0++;
            if(arr[i] == 1)cnt1++;
            if(arr[i] == 2)cnt2++;
 
        }

        int p = min(cnt1 , cnt2);
        
        cnt1 = cnt1 - p;
        cnt2 = cnt2 - p;

        int x = cnt1/3 ;
        int y = cnt2/3; 

        cout << cnt0 + p + x + y << endl;

    }

}