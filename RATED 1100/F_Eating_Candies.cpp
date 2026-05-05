#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;
        vector<int> arr(n) ;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int st = 0; int end = n-1;
        int alice = arr[0] ; int bob = arr[n-1] ;
        
        int ans = 0;
        
        while(st < end){
            if(alice == bob){
                ans = max(ans , st+1 + n - end);
                
                st++ ;end--;
                
                alice += arr[st] ;
                bob += arr[end];
            } else if(alice > bob){
                end--;
                bob += arr[end];
            }else {
                st++;
                alice += arr[st];
            }
        }
        cout << ans << endl;
    }
}