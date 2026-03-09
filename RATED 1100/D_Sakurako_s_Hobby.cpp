#include <bits/stdc++.h>
using namespace std ;
void dfs(vector<vector<int>> &adjlist , vector<int>& col , int node , vector<int>&vis , 
        vector<int>& comp){

    vis[node] = 1 ;
    comp.push_back(node) ;

    for(auto it : adjlist[node]){
        if(vis[it] != 1){
            dfs(adjlist , col , it , vis ,comp) ;
        }
    }
}
int main() 
{
    int T ;
    cin >> T ; 

    while(T--){
        int n ;
        cin >> n ;

        vector<int> arr(n) ;
        for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

        string s ;
        cin >> s ;

        vector<int> col(n+1) ;
        for(int i = 0 ; i < n ; i++){
            col[arr[i]] = s[i]-'0' ;
        }
    
        // make the adjlist for the graph ;
        vector<vector<int>> adjlist(n+1) ;

        for(int i = 0 ; i < n ; i++){
            if(i+1 == arr[i]) continue; 

            adjlist[i+1].push_back(arr[i]) ;
        }
        // for(auto it : adjlist){
        //     for(auto val : it){
        //         cout << val << " " ;
        //     }
        //     cout << endl;
        // }
        
        // now we will calculate the cnt by using DFS

        vector<int> vis(n+1 , 0) ;
        vector<int> ans(n , 0) ;

        for(int i = 1 ; i <= n ; i++){
            if(vis[i] == 0){
                vector<int> comp ;
                dfs(adjlist , col , i , vis , comp) ;
            
                int cnt = 0 ;

                for(auto it : comp){
                    if(col[it] == 0) cnt++ ;
                }

                for(auto it : comp){
                    ans[it-1] = cnt ;
                }
            }
        }

        for(auto it : ans){
            cout << it << " " ;
        }
        cout << endl;
    }
}


// void dfs(ll node, vector<ll>&p, vector<ll>&vis, vector<ll>&ans, ll &cnt, string &s) {
//     if(vis[node]) return;
//     vis[node]=1;
//     if(s[node]=='0') cnt++;
//     dfs(p[node], p, vis, ans, cnt, s);
//     ans[node]=cnt;
// }
 
// void solve()
// {
//     ll n; cin>>n;
//     vector<ll> p(n+1);
//     for(ll i=1;i<=n;i++) {
//         ll x; cin>>x;
//         p[i]=x;
//     }
//     string s; cin>>s;
//     s = '*' + s;
//     vector<ll> vis(n+1), ans(n+1);
//     for(ll i=1;i<=n;i++) {
//         if(!vis[i]) {
//             ll cnt=0;
//             dfs(i, p, vis, ans, cnt, s);
//         } 
//     }
//     for(ll i=1;i<=n;i++) {
//         cout<<ans[i]<<" ";
//     }
//     cout<<'\n';
// }