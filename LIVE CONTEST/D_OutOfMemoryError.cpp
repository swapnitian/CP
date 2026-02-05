// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     long long n, m, h;
//     cin >> n >> m >> h;

//     vector<long long> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     vector<long long> v = arr;
//     vector<long long> last(n, -1);

//     long long res = -1;
//     long long t = 0;

//     while (m--) {
//         long long i, c;
//         cin >> i >> c;
//         i--;
//         t++;

//         long long curr;
//         if (last[i] < res)
//             curr = arr[i];
//         else
//             curr = v[i];

//         long long val = curr + c;

//         if (val > h) {
//             res = t;
//         } else {
//             v[i] = val;
//             last[i] = t;
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (last[i] < res)
//             cout << arr[i] << " ";
//         else
//             cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<vector<int>> mat = {{2,2,2,2,2},{2,2,2,2,2},{2,2,2,2,2},{2,2,2,2,2},{2,2,2,2,2}} ;

    int m = mat.size();
    int n = mat[0].size();
    int threshold = 1 ;
    // creating 2d prefix sum array ;
    vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            prefix[i][j] = mat[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    int ans = 0;
    for (int side = 1; side <= min(m, n); side++)
    {
        for (int i = 1; i <= m - side; i++)
        {
            for (int j = 1; j <= n - side; j++)
            {   
                int sum = INT_MAX;
                if(side == 1){
                    sum = prefix[i][j]-prefix[i-1][j]-prefix[i][j-1]+prefix[i-1][j-1] ;
                }    
                else if (i + side - 1 <= m && j + side - 1 <= n && i - 1 >= 0 && j - 1 >= 0)
                {
                    sum = prefix[i + side - 1][j + side - 1] - prefix[i - 1][j + side - 1] - prefix[i + side - 1][j - 1];
                    cout << sum << endl;
                    cout << i << " " << j << endl;
                }

                if (sum <= threshold)
                    ans = max(ans, side);
            }
        }
    }

    for(int i =0 ; i <= m ; i++){
        for(int j = 0 ; j <= n  ; j++){
            cout << prefix[i][j] << " " ;
        }
        cout << endl;
    }
    cout << ans << endl;
}