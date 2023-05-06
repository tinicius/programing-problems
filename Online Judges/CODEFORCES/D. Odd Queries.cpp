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
    int t;
    cin >> t;

    // t = 5
    // 0 1 2 3 4
    // 0 1 2 3 4 5

    while (t--) {
        int n, q;
        cin >> n >> q;

        int total = 0;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        };

        vector<int> sumP(n);
        int sumA = 0;

        vector<int> sumS(n);
        int sumB = 0;

        for (int i = 0; i < n; i++) {
            sumA += a[i];
            sumP[i] = sumA;
        }

        for (int i = n - 1; i >= 0; i--) {
            sumB += a[i];
            sumS[i] = sumB;
        }

        // dbg(total);

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            int agora;

            int t1, t2, t3;

            if (l - 2 >= 0)
                t1 = sumP[l - 2];
            else
                t1 = 0;

            if (r == n)
                t2 = 0;
            else
                t2 = sumS[r];

            agora = t1 + (((r - l) + 1) * k) + t2;

            if (agora % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}