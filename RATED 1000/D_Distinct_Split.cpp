// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int T ;
//     cin >> T ;

//     long long n ;

//     while(T--){

//         cin >> n ;

//         string s ;
//         cin >> s ; 

//         set <char> s1 , s2 ; 

//         s1.insert(s[0]) ;   
//         int idx = n-1 ; 

//         for(int i = 1 ; i < n-1 ; i++){

//             if(s1.find(s[i]) == s1.end()){
//                 s1.insert(s[i]) ;
//             }else{
//                 idx = i ;
//                 break ;
//             }
//         }

//         while(idx < n){
//             s2.insert(s[idx]) ;
//             idx++ ;
//         }

//         int ans = s1.size() + s2.size() ;

//         cout << ans << "\n" ;
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

        string s ; 
        cin >> s ;

        unordered_set<char> s1 ;
        long long prefix_subarray[n+1] = {} ;
        long long suffix_subarray[n+1]  = {} ;

        for(int i = 0 ; i < n ; i++){

            s1.insert(s[i]) ;
            prefix_subarray[i] = s1.size() ;
        }

        s1.clear() ;

        for(int i = n-1 ; i >= 0 ; i--){

            s1.insert(s[i]) ;
            suffix_subarray[i] = s1.size() ;
        }

        long long ans = 0 ;

        for(int i = 0 ; i < n ; i++){
            ans = max(ans , prefix_subarray[i]+suffix_subarray[i+1]) ;
        }

        cout << ans << endl;
    }
    
    return 0 ;

}