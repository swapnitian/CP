#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n , k ;
        cin >> n >> k ;

        vector<int> arr(n) ;

        set<int> s ;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        
            s.insert(arr[i]);
        }
        bool f1 = true;
        for(int i = 0 ; i < n ; i++){
            int val = arr[i]-k;

            if(s.find(val) != s.end()){
                f1 = false;
                cout << "YES" << endl;
                break;
            }
        }

        if(f1) cout << "NO" << endl;
    }
}