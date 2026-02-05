#include <iostream>
#include <stack>
using namespace std ; 

int main()
{
    int T ;
    cin >> T ; 

    int n ; 

    while(T--){

        cin >> n ; 

        stack<int> s ;
        int a ;

        for(int i = 0 ; i < n ; i++){
            cin >> a ;
            s.push(a) ;
        }

        int ans = 0 ; 
        int freq = 0 ; 
        
        while(!s.empty()){

            if(s.top() == 0){
                freq++ ;
                ans = max(ans , freq) ;
                s.pop() ;
            }else{
                freq = 0 ;
                s.pop() ;
            }

        }

        cout << ans << endl;
    }
}