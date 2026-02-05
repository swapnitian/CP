#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){
        
        string a , b ;

        cin >> a >> b ;

        if(b.length() > a.length()){
            swap(a,b) ;
        }

        if(a == b){
            cout << 0 << endl;
        }else{

            int maxstring_counter = 0 ;
            int ans = 0 ;

            for(int i = 0 ; i < b.length() ; i++){
                
                for(int j = 0 ; j < a.length() ; j++){
                    
                    if(b[i] == a[j]){
                        int idx1 = i ; 
                        int idx2 = j ;
                        maxstring_counter = 0 ;

                        while(idx1 < b.length() && idx2 < a.length()){

                            if(b[idx1] == a[idx2]){
                                maxstring_counter++ ;
                                ans = max(maxstring_counter , ans) ;
                            }else{
                                break;
                            }
                            idx1++ ;
                            idx2++ ;
                        }
                    }
                }
            }

            int total_length = a.length() + b.length() ;

            cout << total_length - (2*ans) << endl; ;

        }

    }

}