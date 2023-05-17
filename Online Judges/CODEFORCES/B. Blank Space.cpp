#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct sort_pred {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
        if (left.first == right.first) {
            return left.second > left.second;
        }
        return left.first > right.first;
    }
};

struct sort_pred_string {
    bool operator()(const std::string &left, const std::string &right) {
        if (left.size() > right.size()) {
            return true;
        } else if (right.size() > left.size()) {
            return false;
        }

        return left > right;
    }
};

bool isPrime(ll num) {
    bool isPrime = true;

    for (ll j = 2; j * j <= num; j++) {
        if (num % j == 0) isPrime = false;
    }

    return isPrime;
}

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }

int mdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Algoritmo do MMC
int mmc(int a, int b) { return a * (b / mdc(a, b)); }

int n_fatores(unsigned long long number) {
    unsigned long long numPF = 0;

    for (unsigned long long i = 2; i <= number; i = i + 2) {
        while (number % i == 0) {
            number = number / i;
            numPF++;
        }
        if (i == 2) i--;
    }

    return numPF;
}

bool sieveOfEratosthenes(ll n) {
    vector<bool> isPrime(n + 1, true);

    set<ll> primes;

    for (ll p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (ll i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (ll p = 2; p <= n; p++) {
        if (isPrime[p]) {
            primes.insert(p);

            if (primes.find(n - p) != primes.end()) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        int aux = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                ans = max(ans, aux);
                aux = 0;
            } else {
                aux++;
            }
        }

        cout << max(aux, ans) << endl;
    }

    return 0;
}