#include <iostream>
using namespace std ;

int score[10][10] = {

        {1,1,1,1,1,1,1,1,1,1} , 
        {1,2,2,2,2,2,2,2,2,1} ,
        {1,2,3,3,3,3,3,3,2,1} ,
        {1,2,3,4,4,4,4,3,2,1} ,
        {1,2,3,4,5,5,4,3,2,1} ,
        {1,2,3,4,5,5,4,3,2,1} ,
        {1,2,3,4,4,4,4,3,2,1} ,
        {1,2,3,3,3,3,3,3,2,1} ,
        {1,2,2,2,2,2,2,2,2,1} ,
        {1,1,1,1,1,1,1,1,1,1} ,
} ;
int main()
{
    int T ; 
    cin >> T ; 

    while(T--){
        char arr[10][10] ;

        for( int i = 0 ; i < 10 ; i++){
            string s ;
            cin >> s ;
            for( int j = 0 ; j < 10 ; j++){
                arr[i][j] = s[j] ;
            }
        }
        int totalscore = 0 ;
        for( int i = 0 ; i < 10 ; i++){
        
            for( int j = 0 ; j < 10 ; j++){

                if(arr[i][j] == 'X'){
                    totalscore += score[i][j] ;
                }
            }
        }
        cout << totalscore << endl;

    }
    return 0 ;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int n ;
    cin >> n ; 
    
    
    if(n == 3){
        
        cout << 6 << endl;
        cout << 1 << " " << 2 << " " << 3 << endl;
        cout << 1 << " " << 3 << " " << 2 << endl;
        cout << 2 << " " << 1 << " " << 3 << endl;
        cout << 2 << " " << 3 << " " << 1 << endl;
        cout << 3 << " " << 1 << " " << 2 << endl;
        cout << 3 << " " << 1 << " " << 2 << endl;
        
    }else{
        
        int arr[10][4] = {

                    {1,2,3,4},
                    {1,2,4,3},
                    {1,3,2,4},
                    {1,3,4,2},
                    {1,4,2,3},
                    {1,4,3,2},
                    {2,1,3,4},
                    {2,1,4,3},
                    {2,3,1,4},
                    {2,3,4,1},
        };
        
        vector<int> help;
        
        for(int i = 0 ; i < n-4 ; i++){
            help.push_back(i+5) ;
        }
        
        cout << 10 << endl;
        for(int i = 0; i < 4 ; i++){
            for(int j = 0 ; j < 4 ; j++){
                cout << arr[i][j] << " " ;
            }
            
            for(auto it : help){
                cout << it << " " ;
            }
            cout << endl;
        }
        
    }
}
