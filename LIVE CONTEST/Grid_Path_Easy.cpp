#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n , q ;

        cin >> n >> q ; 

        string a , b ;
        cin >> a >> b ;

        unordered_map < char , int > m1 , m2 ;

        for(int i = 0 ; i < n ; i++){
            m1[a[i]]++ ;
        }

        for(int i = 0 ; i < n ; i++){
            m2[b[i]]++ ;
        }

        if(m1.at('1') <= m2.at('0')){
            cout << -1 << endl;
            continue; 
        }

        int idx = 0 ;

        if(a[0] != '1'){

            for(int i = n-1 ; i >= 0 ; i--){

                if(a[i] != a[i-1]){
                    swap(a[i] , a[i-1]) ;
                }

            }


        }

    }

}