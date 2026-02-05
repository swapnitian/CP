// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     int T ; 
//     cin >> T ; 
//     long long a , b , c ,d ; 
//     while(T--){
//         cin >> a >> b >> c >> d ;

//         if( b > d ){
//             cout << -1 << endl;
//         }else{
//             if( (a+d-b) < c){
//                 cout << -1 << endl;
//             }else{
//                 long long ans = 2*(d-b) + (a-c) ;

//                 cout << ans << endl;
//             }
//         }

//     }
//     return 0 ;
// }



#include <iostream>
#include <cmath>
using namespace std;

float dis(int s1, int s2, int e1, int e2) {
    return sqrt(pow(e1 - s1, 2) + pow(e2 - s2, 2));
}

int main() {
     int t;
     cin >> t ;

    while(t--){
        int s1, s2, e1, e2;

        cin >> s1 >> s2 >> e1 >> e2 ;
        
        int moves = 0;
        
        if (s1 == e1 && s2 == e2) {
            cout << moves << endl;
            continue;
        }
        
        if ((e2 - s2) < abs(e1 - s1) || (e2 - s2) < 0) {
            cout << -1 << endl;
            continue;
        }
        
        while (true) {
            if (s1 == e1 && s2 == e2) break;

            if (s2 == e2) {
                if (s1 < e1) {
                    s1 += 1; 
                } else {
                    s1 -= 1; 
                }
                moves++;
                continue;
            }
            
            float o1 = dis(s1 - 1, s2, e1, e2);
            float o2 = dis(s1 + 1, s2 + 1, e1, e2);
            
            if (o1 == 0) {
                s1 -= 1;
                moves++;
                break;
            } else if (o2 == 0) {
                s1 += 1;
                s2 += 1;
                moves++;
                break;
            }
            
            if (o1 < o2) {
                s1 -= 1;
            } else {
                s1 += 1;
                s2 += 1;
            }
            moves++;
        }
        
            cout << moves << endl;
        
    
    
    }

    return 0;
}