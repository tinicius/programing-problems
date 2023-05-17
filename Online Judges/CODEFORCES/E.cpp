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
    string s;
    cin >> s;

    string aux = s;

    sort(aux.begin(), aux.end());

    if (aux == s)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}