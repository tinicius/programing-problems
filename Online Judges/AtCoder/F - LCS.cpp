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

string a;
string b;

int i = 0;
int j = 0;

vector<vector<int>> memo(3001, vector<int>(3001, -1));

int lcs_size(int i, int j) {
    auto& p = memo[i][j];

    if (p != -1) return p;

    if (i == a.size() || j == b.size()) return p = 0;

    if (a[i] == b[j]) return p = lcs_size(i + 1, j + 1) + 1;

    return p = max(lcs_size(i + 1, j), lcs_size(i, j + 1));
}

int main() {
    _;

    cin >> a >> b;

    // lcs_size(0, 0);

    for (int i = a.size() - 1; i >= 0; i--) {
        for (int j = b.size() - 1; j >= 0; j--) {
            if (a[i] == b[j])
                memo[i][j] = memo[i + 1][j + 1] + 1;
            else
                memo[i][j] = max(memo[i + 1][j], memo[i][j + 1]);
        }
    }

    int aux = 0;

    int ai = 0;
    int bi = 0;

    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 3000; j++) {
            if (memo[i][j] >= aux) {
                ai = i;
                bi = j;
            }
        }
    }

    string ans;

    i = 0;
    j = 0;

    while (i < a.size() and j < b.size()) {
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i++;
            j++;
        } else if (memo[i + 1][j] > memo[i][j + 1]) {
            i++;
        } else {
            j++;
        }
    }

    // reverse(ans.begin(), ans.end());

    for (auto s : ans) cout << s;
}
