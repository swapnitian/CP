#include <bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int> l1 = {31 , 8} ;
    
    sort(l1.rbegin() , l1.rend()) ;

    for(auto it : l1){
        cout << it << " " ;
    }
    
    cout << endl;
}