#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    int T ; 
    cin >> T ;

    int n , k , x ;

    while(T--){
        cin >> n >> k >> x ;
    
        if( x != 1){
            cout << "YES" << endl;
         
            cout << n << endl;

            while(n--){
                cout << 1 << " " ;
            }
            cout << endl;
        }else{

            if( k == 1 || ( k ==2 && n%2 ==1)){
                cout << "NO" << endl;
            }else{
                if( n%2 == 1){
                    cout << "YES" << endl;
                    int a = (n-3)/2 ;

                    cout << 1+a << endl;

                    cout << 3 << " " ; 

                    while(a--){
                        cout << 2 << " " ; 
                    }
                    cout << endl;
                }else{
                    cout << "YES" << endl;
                    cout << n/2 << endl;

                    for( int i = 0 ; i < n/2 ; i++){
                        cout << 2 << " " ;
                    }
                    cout << endl;
                }
               
            }               
        }
    }
    return 0 ;
}



