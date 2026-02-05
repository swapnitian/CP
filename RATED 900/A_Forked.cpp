#include <bits/stdc++.h>
using namespace std ;

void Total_moves(long long a , long long b , long long x , long long y , set<pair<int , int>>&s){

    pair<int,int> UL = { (x-a) , (y-b) } ; 
    pair<int,int> UR = { (x-a) , (y+b) } ;
    pair<int,int> DR = { (x+a) , (y+b) } ;
    pair<int,int> DL = { (x+a) , (y-b) } ;
    pair<int,int> RU = { (x-b) , (y+a) } ;
    pair<int,int> RD = { (x+b) , (y+a) } ;
    pair<int,int> LU = { (x-b) , (y-a) } ;
    pair<int,int> LD = { (x+b) , (y-a) } ;

    s.insert(UL) ;
    s.insert(UR) ;
    s.insert(DR) ;
    s.insert(DL) ;
    s.insert(RU) ;
    s.insert(RD) ;k
    s.insert(LU) ;
    s.insert(LD) ;

}
int main()
{
    int T ;
    cin >> T ; 

    while(T--){

        long long a , b , k1 , k2 , q1 , q2 ;

        cin >> a >> b ;
        cin >> k1 >> k2 ; 
        cin >> q1 >> q2 ;

        set<pair<int,int>> s1 , s2 ; 

        Total_moves(a , b , k1 , k2 , s1) ;
        Total_moves(a , b , q1 , q2 , s2) ;

        int count = 0 ;

        for( auto it : s2) {
            if(s1.find(it) != s1.end()){
                count++ ;
            }
        }
        cout << count << endl;
    }
    
}