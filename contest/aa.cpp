#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {

    ll n, q; cin>>n>>q;
    vector<vector<ll>> v(n, vector<ll> (n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            char ch; cin>>ch;
            if(ch=='*') v[i][j]=1;
            else v[i][j]=0;
        }
    }

    vector<vector<ll>> pre(n, vector<ll> (n));
    pre[0][0]=v[0][0];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            pre[i][j]=v[i][j];
            if(i>0) pre[i][j]+=pre[i-1][j];
            if(j>0) pre[i][j]+=pre[i][j-1];
            if(i>0 && j>0) pre[i][j]-=pre[i-1][j-1];
        }
    }

    vector<ll> ans(q);
    for(ll k=0;k<q;k++){
        ll y1, x1, y2, x2; cin>>y1>>x1>>y2>>x2;
        y1--; x1--; y2--; x2--;
        ans[k] = pre[y2][x2];
        if(y1>0) ans[k]-=pre[y1-1][x2];
        if(x1>0) ans[k]-=pre[y2][x1-1];
        if(x1>0 && y1>0) ans[k]+=pre[y1-1][x1-1];        
    }

    for(ll x : ans){
        cout<<x ;
    }

}


int main() {
    solve();
    return 0;
}
