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

const int MAX = 30000 + 10;

vector<vector<int>> ed(MAX);
vector<bool> vis(MAX);

bool found = false;

void dfs(int i, int t) {
    if (i == t) {
        found = true;
    } else {
        for (auto k : ed[i]) dfs(k, t);
    }
}

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> a[i];

    int p = 1;

    while (p < n) {
        p = p + a[p - 1];
        if (p == t) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}