#include <bits/stdc++.h>
using namespace std ;
int main()
{
    
    long long n , D ;

    cin >> n >> D ;

    long long arr[n] ;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    sort(arr , arr+n) ;

    long long capacity = n ; 
    long long wins = 0 ; 

    for(int i = n - 1 ; i >= 0 ; i--){
        long long person =1 ;

        if(capacity <= 0) break ;
        
        if(arr[i] > D){
            wins++ ;
            capacity-- ;
        }

        if(arr[i] <= D){

            long long p = arr[i] ;

            if(p*capacity > D){
                while(p <= D && person <= n){
                    p += arr[i] ;
                    person++ ;
                }
            }else{
                break ;
            }

            if(person <= capacity){
                wins++ ;
                capacity -= person ; 
            }
        }

        if(person > n) break ;
    }

    cout << wins << endl;
}



// better solution than mine 


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, d;
    cin >> n >> d;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) // n
        cin >> a[i];
 
    sort(a.begin(), a.end()); // nlogn
 
    long long left = -1;
    long long right = n - 1;
    long long team_size = 1;
    long long teams = 0;
 
    while (left < right) // n
    {
        if ((a[right] * team_size) <= d && left < right)
        {
            left++;
            team_size++;
        }
        else
        {
            teams++;
            right--;
            team_size = 1;
        }
    }
 
    cout << teams << endl;
    return 0;
}
 
// tc = O(nlogn) = O(10^5*log2(10^5)) = O(10^6)
// sc = O(n)