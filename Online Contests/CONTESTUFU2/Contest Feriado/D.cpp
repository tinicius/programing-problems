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
    int n;
    cin >> n;

    vector<vector<int>> matriz;

    for (int i = 0; i < n; i++) {
        vector<int> line;

        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;

            line.push_back(num);
        }

        matriz.push_back(line);
    }

    int dig1 = 0;
    int dig2 = 0;

    for (int i = 0; i < n; i++) {
        dig1 += matriz[i][i];
    }

    for (int i = 0; i < n; i++) {
        dig2 += matriz[i][(n-1) - i];
    }

    // dbg(dig1);
    // dbg(dig2);

    cout << abs(dig1 - dig2) << endl;

    return 0;
}