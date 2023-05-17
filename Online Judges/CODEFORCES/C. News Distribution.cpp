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

const ll MAX = 1e5 + 42;

vector<bool> know(MAX);
vector<vector<ll>> friends(MAX);

int main() {
    ll n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        vector<ll> group;
        int f;
        cin >> f;
        f--;
        group.push_back(f);
    }

    return 0;
}