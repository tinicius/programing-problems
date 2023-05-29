#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    int n, x, y;
    cin >> n >> x >> y;

    set<pair<int, int>> visited;

    queue<pair<int, int>> prin;
    queue<pair<int, int>> aux;

    prin.push({pow(2, n - 1), pow(2, n - 1)});

    int t = 0;

    while (!prin.empty() || !aux.empty()) {
        if (!prin.empty()) {
            auto fr = prin.front();

            if (fr.f = x && fr.s == y) {
                cout << t << endl;
                break;
            }

            int po = pow(2, n);

            vector<pair<int, int>> square = {
                {0, 0}, {po, 0}, {0, po}, {po, po}};

            for (auto v : square) {
                int m1 = (fr.f + v.f) / 2;
                int m2 = (fr.s + v.s) / 2;
                if (visited.find({m1, m2}) == visited.end()) {
                    aux.push({m1, m2});

                   visited.insert({m1, m2});
                }
            }

            prin.pop();
        } else {
            t++;
            prin = aux;
        }
    }

    return 0;
}