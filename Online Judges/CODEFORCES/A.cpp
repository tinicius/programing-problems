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

const int MAX = 100 + 10;

vector<bool> visited(MAX);
vector<vector<int>> edges(MAX);

int main() {
    int v1, v2;

    while (scanf("%d, %d", &v1, &v2) >= 0) {
        // cout << v1 << " " << v2;
        edges[v1].push_back(v2);
        edges[v2].push_back(v1);
    }

    for (int i = 0; i <= 100; i++) {
        if (edges[i].size() > 0) {
            cout << "V" << i << " ";

            sort(edges[i].begin(), edges[i].end());

            for (auto k : edges[i]) cout << k << " ";
            cout << endl;
        }
    }

    return 0;
}