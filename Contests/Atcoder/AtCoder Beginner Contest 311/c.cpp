#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int MAX = 2 * 1e5;

vector<vector<int>> edge(MAX, vector<int>());
vector<int> color(MAX, 0);

vector<int> parent(MAX);

int start = -1;
int end_c = -1;

bool dfs(int n) {
    color[n] = 1;

    for (auto u : edge[n]) {
        if (color[u] == 0) {
            parent[u] = n;

            if (dfs(u)) return true;
        } else if (color[u] == 1) {
            start = u;
            end_c = n;
            return true;
        }
    }

    color[n] = 2;
    return false;
}

int main() {
    _;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        edge[i + 1].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (color[i] == 0 && dfs(i)) break;
    }

    vector<int> ans;

    while (end_c != start) {
        ans.push_back(end_c);
        end_c = parent[end_c];
    }

    ans.push_back(start);

    cout << ans.size() << endl;

    for (auto i = ans.rbegin(); i != ans.rend(); i++) cout << *i << " ";
    cout << endl;
}
