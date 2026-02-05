#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ; 
        cin >> n ;

        vector<long long>arr(n) ;

        for(int i = 0 ; i < n ; i++){
            cin >> arr[i] ;
        }
        vector<pair< long long , long long >> building_map(n) ; 

        for(int i = 0 ; i < n ; i++){
            building_map.push_back({arr[i] , i}) ;
        }

        sort(building_map.rbegin() , building_map.rend()) ;

        long long sum = 0 ;
        long long d = 0; 

        vector<long long> ans(n+1 , 0) ;
        
        for(int i = 0 ; i < n ; i++){
            if(i%2 == 0){
                d = d + 2 ;
            }
            sum += d*building_map[i].first ;
        }
        cout << sum << endl;
        
        long long cordinate = 1 ; 

        for(int i = 0 ; i < n ; i++){

            ans[building_map[i].second + 1] = cordinate ;
            
            if(cordinate < 0 ){
                cordinate = abs(cordinate) + 1 ;
            }else{
                cordinate = -cordinate ;
            }
        }

        for(auto it : ans){
            cout << it << " " ;
        }
        cout << endl;
    }   
    return 0 ;
}





#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) // n
            cin >> a[i];

        vector<pair<long long, long long> > building_map;
        for (int i = 0; i < n; i++) // n
            building_map.push_back({a[i], i});

        sort(building_map.rbegin(), building_map.rend()); // nlogn

        vector<long long> ans(n + 1, 0);

        ans[0] = 0;

        long long minutes = 0;
        long long coordinate = 1;
        for (int i = 0; i < n; i++) // n
        {
            ans[building_map[i].second + 1] = coordinate;
            minutes += (2 * abs(coordinate) * building_map[i].first);
            if (coordinate < 0)
                coordinate = abs(coordinate) + 1;
            else
                coordinate = -coordinate;
        }
        
        cout << minutes << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}

// tc = O(nlogn) = O(2*10^5 * log(2*10^5)) = O(10^6)
// sc = O(n) = O(2*10^5) = O(10^6)