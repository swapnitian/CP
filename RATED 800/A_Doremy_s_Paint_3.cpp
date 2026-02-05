#include <iostream>
#include <vector> 
#include <map>
using namespace std ;

int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector <int> arr(n) ;
        map<int , int> m ;

        for(int i = 0 ; i< n ; i++){
            cin >> arr[i] ;
            m[arr[i]]++ ;
        }

        if(n == 2 || m.at(arr[0]) == n){
            cout << "Yes" << endl;
            continue; 
        }

        if(m.size() > 2 ){
            cout << "No" << endl;
        }else if(m.size() == 2){

            int freq1 = m.begin()->second ;
            int freq2 = m.rbegin()->second ;

            if( n%2 == 0 ){
                if(freq1 == freq2){
                    cout << "Yes" << endl;
                }
            }else if( n%2 == 1 && abs(freq1-freq2) == 1 ){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
   
        }

    }
}
