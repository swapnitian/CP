#include <bits/stdc++.h>
using namespace std ;
bool ispalindrome(vector<long long>arr){
    int l = 0 ;
    int r = arr.size()-1 ;

    while(l < r){
        if(arr[l] == arr[r]){
            l++ ;
            r-- ;
        }else{
            return false ;
        }
    }
    return true ;
}
int main()
{   
    int T ;
    cin >> T ;
    while(T--){
        int n ;
        cin >> n ;
        vector<long long>arr(n) ;
        
        for(int i = 0 ; i < n; i++) cin >> arr[i] ;
        
        if(ispalindrome(arr)) cout << 0 << endl;
        else{
            int l = 0 ; int r = n-1 ;
            long long x = 0 ;
            while(l < r){
                x = __gcd(abs(arr[r]-arr[l]) , x) ;
                l++ ; r-- ;
            }
            cout << x << endl;
        }
    }
}