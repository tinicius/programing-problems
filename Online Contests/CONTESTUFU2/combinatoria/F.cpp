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

ll fat(ll n) {
    int ans = 1;

    for (ll i = n; i > 0; i--) {
        ans *= i;
    }

    return ans;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        map<char, ll> reps;

        for (ll i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            reps[s[i]] = 0;
        }

        for (ll i = 0; i < s.size(); i++) reps[s[i]] = reps[s[i]] + 1;

        ll den = 0;

        for (auto m : reps) {
            if (m.second > 1) den += fat(m.second);
        }

        ll ans;

        if (den != 0)
            ans = fat(s.size()) / den;
        else
            ans = fat(s.size());
        cout << ans << endl;
    }

    return 0;
}