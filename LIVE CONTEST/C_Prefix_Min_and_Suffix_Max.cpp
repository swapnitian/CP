#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ; 
        cin >> n ;

        long long arr[n] ;
        long long prefix[n] ;
        long long suffix[n] ;

        string ans = "" ;
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
      
        ans += '1' ;
        prefix[0] = arr[0] ;
        
        for(int i = 1 ; i < n ; i++){
            prefix[i] = min(prefix[i-1] , arr[i]) ;    
        }

        suffix[n-1] = arr[n-1] ;

        for(int i = n-2 ; i >=0 ; i--){
            suffix[i] = max(suffix[i+1] , arr[i]) ;    
        }

        for(int i = 1 ; i < n-1 ; i++){
            if(arr[i] == prefix[i] || arr[i] == suffix[i]){
                ans += '1' ;
            }else{
                ans += '0' ;
            }
        }

        ans += '1' ;

        cout << ans << endl;
    }

}


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// void solve(){
//     ll n; cin>>n;
//     vector<ll> a(n);
//     for(ll &x : a) cin>>x;
//     vector<ll> pre(n), suff(n);

    

//     pre[0]=a[0]; suff[n-1]=a[n-1];
//     for(ll i = 1; i<n; i++){
//         pre[i]=min(pre[i-1], a[i]);
//     }
//     for(ll i = n-2; i>=0; i--){
//         suff[i]=max(suff[i+1], a[i]);
//     }

//     string s;
//     for(ll i = 0; i<n; i++){
//         if(a[i]==pre[i] || a[i]==suff[i]) s+='1';
//         else s+='0';
//     }

//     cout<<s<<'\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll T; cin>>T;
//     while(T--){
//     solve();
//     }
//     return 0;
// }