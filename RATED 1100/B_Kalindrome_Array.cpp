#include <bits/stdc++.h>
using namespace std ;
bool check(vector<int> &arr) {
    int st = 0 ; int end = arr.size() - 1;

    while(st <= end){
        if(arr[st] == arr[end]){
            st++ ; end--;
        }else{
            return false;
        }
    }
    return true;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // will use two pointer we are having two option to delete the element ;

        int st = 0 ; int end = n-1;

        int a1 , a2 ;

        while(st <= end){
            if(arr[st] == arr[end]){
                st++;
                end--;
            }else{
                a1 = arr[st];
                a2 = arr[end];
                break;
            }
        }

        vector<int> v1 , v2 ;

        for(int i = 0; i < n; i++){
            if(arr[i] == a1)continue;

            v1.push_back(arr[i]);
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == a2)continue;

            v2.push_back(arr[i]);
        }

        if(check(v1) || check(v2)){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}