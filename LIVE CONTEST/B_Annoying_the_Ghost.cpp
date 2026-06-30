/*
    ███████╗ ██╗    ██╗  █████╗  ██████╗  ███╗   ██╗ ██╗ ████████╗
    ██╔════╝ ██║    ██║ ██╔══██╗ ██╔══██╗ ████╗  ██║ ██║ ╚══██╔══╝
    ███████╗ ██║ █╗ ██║ ███████║ ██████╔╝ ██╔██╗ ██║ ██║    ██║
    ╚════██║ ██║███╗██║ ██╔══██║ ██╔═══╝  ██║╚██╗██║ ██║    ██║
    ███████║ ╚███╔███╔╝ ██║  ██║ ██║      ██║ ╚████║ ██║    ██║
    ╚══════╝  ╚══╝╚══╝  ╚═╝  ╚═╝ ╚═╝      ╚═╝  ╚═══╝ ╚═╝    ╚═╝

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
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    int operations = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= b[i]){
            a[i] = b[i];
            continue;
        }
        int idx = -1;
        for(int j = i+1; j < n; j++){
            if(a[j] <= b[i]){
                idx = j;
                break;
            }
        }

        if(idx == -1){
            cout << -1 << endl;
            return;
        }
        // cout << idx << endl;
        for(int j = idx; j != i && j > 0; j--){
            swap(a[j] , a[j-1]);
            operations++;
            // cout << a[j] << " " << a[j-1] << endl;
            // if(j == i) break;
        }
    }
    
    // for(int i = 0; i < n; i++) cout << a[i] << " ";

    cout << operations << endl;
    return;
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