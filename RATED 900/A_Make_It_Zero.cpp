#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    int n ;

    while (T--)
    {
        /* code */
        cin >> n ;

        int a ;
  
        for( int i = 0 ; i < n ; i++){
            cin >> a ;
        }


        if( n%2 == 0){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }else{
            cout << 4 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }

    }
    
}