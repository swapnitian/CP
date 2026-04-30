#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n;

        vector<int> arr(n) ;
        vector<int> ans(n , 0);
        
        vector<int> v1 , v2 , v3 , v4;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;

            if(arr[i]%6 == 0){
                v1.push_back(arr[i]) ;
            }else if(arr[i]%3 == 0){
                v3.push_back(arr[i]) ;
            }else if(arr[i]%2 == 0){
                v2.push_back(arr[i]) ;
            }else {
                v4.push_back(arr[i]) ;
            }
        }

        int idx = n-1 ;

        for(int i = 0 ; i < v1.size() ; i++){
            ans[idx] = v1[i];
            idx--;
        }
        for(int i = 0 ; i < v3.size() ; i++){
            ans[idx] = v3[i];
            idx--;
        }
        for(int i = 0 ; i < v4.size() ; i++){
            ans[idx] = v4[i];
            idx--;
        }
        for(int i = 0 ; i < v2.size() ; i++){
            ans[idx] = v2[i];
            idx--;
        }

        for(auto it : ans){
            cout << it << " " ;
        }
        cout << endl;
    }
}