#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int T ;
    cin >>T ;

    while(T--){

        int n ;
        cin >> n ;

        int a[n]; 
        int b[n] ;

        vector<pair< int , int >> v ;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i] ;
        }
        int k = 0 ;
        
        for(int i=0 ; i < n ; i++){
               
            for(int j =0 ; j < n-i-1 ; j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]) ;
                    v.push_back({1 ,j+1}) ;
                    k++ ;
                }
            }
        
        }

        
        for(int i=0 ; i < n ; i++){
               
            for(int j =0 ; j < n-i-1 ; j++){
                if(b[j]>b[j+1]){
                    swap(b[j],b[j+1]) ;
                    v.push_back({2 ,j+1}) ;
                    k++ ;
                }
            }
        
        }

        for(int i = 0 ; i < n ; i++){
            int h = b[i] ;

            if(a[i] > b[i]){
                b[i] = a[i] ;
                a[i] = h ;
                v.push_back({3 ,i+1}) ;
                k++ ;
            }

        }

        cout << k << endl;

        for(auto val : v){
            cout << val.first << " " << val.second << endl;
        }


    }
}