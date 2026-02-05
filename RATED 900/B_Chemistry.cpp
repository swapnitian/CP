#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    long long n , k ;
    string s ;

    while(T--){

        cin >> n >> k ; 
        cin >> s ;
        
        unordered_map<char , int > m ;

        for( int i = 0 ; i < n ; i++){
            m[s[i]]++ ;
        }

        int odd_count = 0 ;
        
        for(auto it : m){
            if(it.second%2 != 0){
                odd_count++ ;
            }
        }

        if(odd_count > k+1 ){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0 ; 
}

// 2 nd method 

// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
 
//         vector<int> frequency_of_characters(26, 0);
//         for (int i = 0; i < n; i++) // n
//             frequency_of_characters[s[i] - 'a']++;
 
//         long long odd_frequency = 0;
//         for (int i = 0; i < 26; i++) // 26
//             odd_frequency += frequency_of_characters[i] % 2;
 
//         if (odd_frequency > k + 1)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }