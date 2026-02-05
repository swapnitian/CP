#include <bits/stdc++.h>
using namespace std;
int mex(vector<int>&v){
    int n = v.size() ;
    set<int> s ;
    for(int i =0 ; i < n ; i++){
        s.insert(v[i]) ;
    }
    for(int i = 0 ; i < n; i++){
        if(s.find(i) == s.end()) return i ;
    }
    return n ;
}   
void solve()
{
    int n ;
    cin >> n ;

    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

    sort(arr.begin() , arr.end()) ;

    vector<int> v1 ;
    int lmex , rmex ;
    for(int i = 0 ; i < n-1 ; i++){
        v1.push_back(arr[i]) ;
        lmex = mex(v1) ;
        vector<int> v2 ;
        for(int j = i+1 ; j < n ; j++){
            v2.push_back(arr[j]) ;
        }
        rmex = mex(v2) ;

        if(lmex == rmex){
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
}

