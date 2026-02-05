#include <bits/stdc++.h>
using namespace std ;

bool checkfairnumber(long long n)
{
    string s = to_string(n) ;

    for(int i = 0 ; i < s.length() ; i++){

        int a = s[i] - '0' ;
        
        if(a == 0) continue;

        if(n % a != 0) return false ;
    }

    return true ;
}
int main()
{
    int T ;
    cin >> T ;

    while(T--){

        long long n ;
        cin >> n ; 

        if(checkfairnumber(n)){
            cout << n << endl;
        }else{

            n++ ;
            while(true){

                if(checkfairnumber(n)){
                    cout << n << endl;
                    break ;
                }else{
                    n++ ;
                }

            }
            
        }

    }

    return 0 ;
}




#include <bits/stdc++.h>
using namespace std;

bool isFair(long long n)
{
    long long num = n;
    while (num != 0)
    {
        int x = num % 10;
        if (x != 0 && n % x != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
} // O(18)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (!isFair(n)) // O(2520)
            n += 1;
        cout << n << endl;
    }
}

// Time Complexity: O(2520 * 18) = O(45360) ~ O(10^5)
// Space Complexity: O(1)