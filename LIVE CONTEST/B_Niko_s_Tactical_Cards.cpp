#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T ;
    
    while(T--){
        int n;
        cin >> n;
        
        vector<long long> a(n) ;
        vector<long long> b(n) ;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        map<long long, bool> m;
        m[0] = true;
        
        for(int i = 0; i < n; i++){
            map<long long, bool> help;
            for(auto it : m){
                long long red = it.first - a[i];
                long long blue = b[i] - it.first;
                
                help[red] = true;
                help[blue] = true;
            }
            m = help;
        }
        
        long long maxans = LLONG_MIN;
        for(auto it : m){
            maxans = max(maxans, it.first);
        }
        cout << maxans << endl;
    }
}