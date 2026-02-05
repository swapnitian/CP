#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        int n ;
        cin >> n ;

        vector<long long> a(n) , b(n) ;

        for(int i = 0 ; i < n ; i++) cin >> a[i] ;
        
        for(int i = 0 ; i < n ; i++) cin >> b[i] ;

        // in this problem we have to find the subarray that can be converted from a to b using sorting
        // so for that we will find the subarray that is not matching from first and last idx
        

        // extend the left and right boundary if possible 

        int st = -1 ; int end = -1 ;

        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]){
                if(st == -1){
                    st = i ;
                }else{
                    end = i ;
                    break ;
                }
            }
        }
        // we have now 0 based indexing keep in mind 

        // will try to extend the left boundary that is 

        int idx = st ;

        while(idx > 0) {
            if(b[idx] >= b[idx-1]){
                idx-- ;
            }else{
                break ;
            }
        }
        st = idx ;
        // now for the right part 

        // suppose if there is no ending idx that decreased in that case we have to think ;
        
        if(end == -1){
            end = n-1 ;
        }
        idx = end ;

        while(idx < n-1){
            if(b[idx] <= b[idx+1]){
                idx++ ;
            }else{
                break ;
            }
        }
        end = idx ;

        cout << st+1 << " " << end+1 << endl; 
    }
}