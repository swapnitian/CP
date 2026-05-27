#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--){
        int n;
        cin >> n;

        for(int i = 1; i <= 2*n; i++){
            if(i&1) cout << i << " ";
        }
        cout << endl;
    }

}