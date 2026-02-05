#include <bits/stdc++.h>
using namespace std ;
int main(){

    
    long long T ;
    cin >> T ;

    while(T--){

        long long x , y , k ;
        cin >> x >> y >> k ;

        long long total_sticks = y*k + k ;

        long long trade = 1 + k ;
        
        if(x >= total_sticks){
            cout << trade << endl;
            continue;
        }

        total_sticks -= x ;
        x-- ;
        
        if(total_sticks % x == 0){
            total_sticks /= x ;
        }else{
            total_sticks /= x ;
            total_sticks++ ;
        }

        trade += total_sticks ;

        cout << trade << endl;

    }
}