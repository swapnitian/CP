// #include <bits/stdc++.h>
// using namespace std ;

// void Count_maximum_subarray(vector<pair<long long ,long long>>&v ,vector<long long>&arr){

//     long long count = 1 ;
//     v.push_back({arr[0] ,count}) ;

//     for(int i = 1 ; i < arr.size() ; i++){

//         if(arr[i] == arr[i-1]){
//             count++ ;
//         }else{
//             count = 1; 
//         }
//         v.push_back({arr[i] , count})  ;
//     }
// }
// int main()
// {
//     int T ;
//     cin >> T ;

//     long long n ;    

//     while(T--){

//         cin >> n ;

//         vector<long long> a(n) , b(n);
        
//         vector<pair<long long , long long>> v1 , v2 ;

//         for(int i = 0 ; i < n ; i++){
//             cin >> a[i] ;
//         }

//         for(int i = 0 ; i < n ; i++){
//             cin >> b[i] ;
//         }   

//         Count_maximum_subarray(v1 , a) ;
//         Count_maximum_subarray(v2 , b) ;

//         sort(v1.begin() , v1.end() , [](auto a , auto b){
//             return a.second > b.second ;
//         });

//         sort(v2.begin() , v2.end() , [](auto a , auto b){
//             return a.second > b.second ;
//         });

//         for(auto val : v1){
//             cout << val.first << " " << val.second << endl;
//         }
//         for(auto val : v2){
//             cout << val.first << " " << val.second << endl;
//         }

//         long long max1 = 1 ;
//         long long max2 = 1 ;

//         for(int i = 0 ; i < v1.size() ; i++){

//             if(v2[0].first == v1[i].first){
//                 max1 = v2[0].second + v1[i].second ;
//                 break;
//             }

//         }

//         for(int i = 0 ; i < v2.size() ; i++){

//             if(v1[0].first == v2[i].first){
//                 max2 = v1[0].second + v2[i].second ;
//                 break;
//             }

//         }

//         cout << max(max1 , max2) << endl;

//     }   
//     return 0 ;
// }




#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n ;

    while(T--){
        
        cin >> n ;

        long long a[n] ;
        long long b[n] ;

        long long max_subarray_a[2*n+1] = {} ;
        long long max_subarray_b[2*n+1] = {} ;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }   

        long long count = 1 ;

        for(int i = 1 ; i < n ; i++){

            if(a[i] == a[i-1]){
                count++ ;
            }else{
                max_subarray_a[a[i-1]] = max(max_subarray_a[a[i-1]] , count) ;
                count = 1 ;
            }
        }

        max_subarray_a[a[n-1]] = max(max_subarray_a[a[n-1]] , count) ; // for last element if there is not any different element in last place 

        count  = 1 ;
        for(int i = 1 ; i < n ; i++){

            if(b[i] == b[i-1]){
                count++ ;
            }else{
                max_subarray_b[b[i-1]] = max(max_subarray_b[b[i-1]] , count) ;
                count = 1 ;
            }
        }
        max_subarray_b[b[n-1]] = max(max_subarray_b[b[n-1]] , count) ;

        long long ans = -1 ;

        for(int i = 0 ; i < 2*n+1 ; i++){
            ans = max(ans , max_subarray_a[i] + max_subarray_b[i]) ; 
        }

        cout << ans << endl;
    }       
    return 0 ;
}