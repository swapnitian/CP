// #include <bits/stdc++.h> 
// using namespace std ;
// int main()
// {
//     int T ;
//     cin >> T ;

//     while(T--){

//         long long n ; 
//         cin >> n ;

//         for(int i = 0 ; i < n-1 ; i++){
//             if(i%2 == 0){
//                 cout << -1 << " " ;
//             }else{
//                 cout << 3 << " " ;
//             }
//         }

//         if(n%2 == 0){
//             cout << 2 << " " ;
//         }else{
//             cout << -1 << " " ;
//         }
        
//         cout << endl;
//     }
//     return 0 ;
// }



#include <bits/stdc++.h>
using namespace std ;
int main()
{   

    string num ;
    cin >> num ;

    int n = num.size() ;

        int count =1;

        string ans = "";
        int nums = -1 ;
    
        int a ; 

        for(int i = 0 ; i < n-1 ; i++){

            if(num[i] == num[i+1]){
                a = num[i] - '0' ;
                count++ ;
            }else{
                count = 1 ;
            }

            if(count == 3){
                nums = max(nums , (100*a + 10*a + a)) ;
                
                if(nums == 0){
                    ans = "000" ;
                }else{
                    ans = to_string(nums) ;
                }
                count = 1 ;
            }

        }

        cout << ans << endl;
}