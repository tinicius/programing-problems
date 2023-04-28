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

bool isPalindron(string s) {
    for (int i = 0; (s.size() - 1) - i > i; i++) {
        int j = (s.size() - 1) - i;

        if (s[i] != s[j]) return false;
    }

    return true;
}

std::string toBinary(int n) {
    std::string r;
    while (n != 0) {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m1;
        int m2;
        cin >> m1 >> m2;

        int sum = 0;
        int c = 0;

        for (int i = m1; i <= m2; i++) {
            string sm1 = to_string(i);

            if (isPalindron(sm1)) {
                if (isPalindron(toBinary(i))) {
                    c++;
                    sum += i;
                }
            };
        }

        cout << sum << " " << c << endl;
    }

    return 0;
}