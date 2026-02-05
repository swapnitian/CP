#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        set<int> s ;
        for (int i = 0; i < n; i++){
            cin >> arr[i] ;
            s.insert(arr[i]) ;
        }
        int mex; 
        for(int i = 0 ; i <= n ; i++){
            if(s.find(i) == s.end()){
                mex= i ;
                break ;
            }
        }

        cout << min(mex , k-1) << endl;
    }
}
