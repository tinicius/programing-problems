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

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        int maior = max(a, b);
        int menor = min(a, b);
        int k = maior / 2;

        if (a == b) {
            while (a > 0 && b > 0) {
                if (a >= b) {
                    a -= 2;
                    b -= 1;
                } else {
                    b -= 2;
                    a -= 1;
                }
            }

            if (a == 0 && b == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if ((maior - 2 * k) == 0 && menor - k == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}