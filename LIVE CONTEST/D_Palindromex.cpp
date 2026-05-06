#include <bits/stdc++.h> 
using namespace std ;
using ll = long long;

int solve(int l , int r , int n , vector<ll> &v){
    set<int>s ;
    for(int i = 0 ; i <=n ; i++){
        s.insert(i);
    }

    while(l >= 0 && r < 2*n && v[l] == v[r]){
        s.erase(v[l]);
        l-- ; r++ ;
    } 

    return *(s.begin());
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        ll n ;
        cin >> n;
        
        vector<ll> v(2 *n);

        for(int i = 0 ; i < 2*n ; i++){
            cin >> v[i];
        }
        int idx1 , idx2 ;
        for(int i = 0; i < 2*n; i++){
            if(v[i] == 0){
                idx1 = i;
                break;
            }
        }
        
        for(int i = (2*n)-1; i >= 0; i--){
            if(v[i] == 0){
                idx2 = i;
                break;
            }
        }

        cout << max({solve(idx1, idx1, n , v) , solve(idx2 , idx2 , n ,v) , solve((idx1+idx2)/2 , (idx1+idx2+1)/2 , n ,v)}) << endl;
    }
}