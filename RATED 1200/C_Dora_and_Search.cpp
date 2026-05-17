#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int T;
    cin >>T ;

    while(T--){
        ll n;
        cin >> n;
    
        vector<ll> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        ll st = 1; ll end = n;
        ll mini = 1 ; ll maxi = n;

        while(st < end){
            if(arr[st] == mini){
                st++;
                mini++;
            } 
            if(arr[st] == maxi){
                st++;
                maxi--;
            } 
            if(arr[end] == mini){
                end--;
                mini++;
            }
            if(arr[end] == maxi){
                end--;
                maxi--;
            }

            if(arr[st] != mini && arr[st] != maxi && arr[end] != mini && arr[end] != maxi){
                break;
            }
        }

        if(st >= end){
            cout << -1 << endl;
        }else{
            cout << st << " " << end << endl;
        }

    }
}