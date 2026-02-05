#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ; 
        cin >> n ;

        // calculating the power of 2 ; 

        long long copy_n = n-1 ;
        long long power = 0 ;

        while(copy_n > 1){
            copy_n/= 2 ;
            power++ ;
        }

        // printing the array ;

        long long value = pow(2 , power) ;
        
        while(value--){
            cout <<  value << " " ; 
        }

        for(int i = pow(2 , power) ; i < n ; i++){
            cout << i << " " ;
        }

        cout << "\n" ;
    }
    return 0 ;
}

// learning we can find the MSB (most significant bit of decimal no.) = using STL log2(n) ;


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n--;
        long long msb = log2(n); // log2
        vector<long long> ans;
        long long num = pow(2, msb) - 1;
        while (num >= 0) // n
        {
            ans.push_back(num);
            num--;
        }
        num = pow(2, msb);
        while (num <= n) // n
        {
            ans.push_back(num);
            num++;
        }

        for (auto it : ans) // n
            cout << it << " ";
        cout << endl;
    }
}

// tc = O(n) = O(2*10^5)
// sc = O(n) = O(2*10^5)