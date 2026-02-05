#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n ;
    cin >> n ;
    
    vector<int> arr ; 
    set<int> s ;
    for(int i = 0 ; i < n ; i++){
        int v ;
        cin >> v ;
        if(s.find(v) == s.end()){
            arr.push_back(v) ;
            s.insert(v) ;
        }
    }

    sort(arr.begin() , arr.end()) ;

    int count = 1 ;
    int ans =1 ;
    for(int i = 0 ; i < arr.size()-1 ; i++){
        if(arr[i+1]-arr[i] == 1){
            count++ ;
            ans = max(count , ans) ;
        }else count = 1 ;
    }
    cout << ans << endl;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
}



#include <bits/stdc++.h>
using namespace std;  
void solve()
{
    int n ;
    cin >> n ;
   
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        solve() ;
    }
}


