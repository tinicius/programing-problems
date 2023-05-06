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

int fat(int n) {
    int ans = 1;

    for (int i = n; i > 0; i--) ans *= i;
    return ans;
}
bool chegou;

void andar(vector<vector<int>> *matriz, pair<int, int> p,
           set<pair<int, int>> *visited, int n) {
    if ((*visited).find(p) != (*visited).end()) {
        return;
    };

    (*visited).insert(p);

    if (p.first == n - 1 && p.second == n - 1) {
        cout << "chegou" << endl;
        return;
    };

    if (p.second - 1 >= 0) {
        if ((*matriz)[p.first][p.second - 1] == 1)
            andar(matriz, {p.first, p.second - 1}, visited, n);
    }

    if (p.second + 1 < n) {
        if ((*matriz)[p.first][p.second - 1] == 1)
            andar(matriz, {p.first, p.second + 1}, visited, n);
    }

    if (p.first - 1 >= 0) {
        if ((*matriz)[p.first][p.second - 1] == 1)
            andar(matriz, {p.first - 1, p.second}, visited, n);
    }

    if (p.first + 1 < n) {
        if ((*matriz)[p.first][p.second - 1] == 1)
            andar(matriz, {p.first + 1, p.second}, visited, n);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        chegou = false;
        int n;
        cin >> n;

        set<pair<int, int>> visited;

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

        andar(&matriz, {0, 0}, &visited, n);

        if (chegou)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}