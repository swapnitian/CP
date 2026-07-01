

/*
    ???????? ???    ???  ??????  ???????  ????   ??? ??? ?????????
    ???????? ???    ??? ???????? ???????? ?????  ??? ??? ?????????
    ???????? ??? ?? ??? ???????? ???????? ?????? ??? ???    ???
    ???????? ?????????? ???????? ???????  ?????????? ???    ???
    ???????? ?????????? ???  ??? ???      ??? ?????? ???    ???
    ????????  ????????  ???  ??? ???      ???  ????? ???    ???

            Code. Debug. Optimize. Repeat.
*/

#include <bits/stdc++.h>
using namespace std;

// ===================== DEFINES =====================
#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// ===================== FAST IO =====================
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ===================== MODULAR EXPO =====================
ll modPow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;

    while (b) {
        if (b & 1)
            res = (res * a) % mod;

        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// ===================== MODULAR INVERSE =====================
ll modInverse(ll a, ll mod = MOD) {
    return modPow(a, mod - 2, mod);
}

// ===================== SIEVE =====================
const int MAX_SIEVE = 1e6 + 5;

vector<bool> isPrime(MAX_SIEVE, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAX_SIEVE; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_SIEVE; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i < MAX_SIEVE; i++) {
        if (isPrime[i])
            primes.pb(i);
    }
}

// ===================== FACTORIALS =====================
const int MAXN = 1e6 + 5;

vector<ll> fact(MAXN);
vector<ll> invFact(MAXN);

void precomputeFactorials() {
    fact[0] = 1;

    for (int i = 1; i < MAXN; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    invFact[MAXN - 1] = modInverse(fact[MAXN - 1]);

    for (int i = MAXN - 2; i >= 0; i--)
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
}

// ===================== NCR =====================
ll nCr(ll n, ll r) {
    if (r < 0 || r > n)
        return 0;

    return (((fact[n] * invFact[r]) % MOD)
            * invFact[n - r]) % MOD;
}

// ===================== NPR =====================
ll nPr(ll n, ll r) {
    if (r < 0 || r > n)
        return 0;

    return (fact[n] * invFact[n - r]) % MOD;
}

// ===================== GCD / LCM =====================
ll gcdll(ll a, ll b) {
    return __gcd(a, b);
}

ll lcmll(ll a, ll b) {
    return (a / gcdll(a, b)) * b;
}

// ===================== SOLVE =====================
void solve() {
    int n , ones;
    cin >> n >> ones;
    
    int zeros = 3*n-ones;
    
    string s = "";
    s.append(3*n, '.');
    // cout << s << endl;
    for(int i = 0; i < n; i++){
        if(zeros == 0){
            s[i] = '1';
            s[i+n] = '1';
            s[i+2*n] = '1';
            ones = ones - 3;
        }else if(zeros == 1){
            s[i] = '0';
            s[i+n] = '1';
            s[i+2*n] = '1';
            
            ones = ones-2;
            zeros--;
        }else if(zeros >= 2){
            s[i] = '0';
            s[i+n] = '0';
            if(ones > 0){
                s[i+2*n] = '1';
                ones--;
                zeros -= 2;
            }else{
                s[i+2*n] = '0';
                zeros -= 3;
            }
        }
    }
    cout << s << endl;
}

int main() {
    fastIO();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}