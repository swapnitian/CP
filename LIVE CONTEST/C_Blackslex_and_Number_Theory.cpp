#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<long long> arr(n) ;

        for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

        sort(arr.begin() , arr.end()) ;

        long long mini = arr[0] ;
        
        // bc galat abh minimum diff nikalte jai 
        long long ans = LLONG_MAX ;
        for(int i = 1 ; i < n ; i++){
            ans = min(ans , arr[i]-mini) ;
        }
        cout << max(ans , mini)<< endl;
    }
}
