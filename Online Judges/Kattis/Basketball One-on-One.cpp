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

typedef pair<int, int> pii;

typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;

bool cmp(pii l, pii r) { return l.second < r.second; }

void solucao_mto_burra(string s) {
    int a = 0;
    int b = 0;

    bool empate = false;

    for (int i = 0; i < s.size(); i += 2) {
        char p = s[i];
        char sc = s[i + 1];

        int pts;

        if (sc == '1')
            pts = 1;
        else
            pts = 2;

        if (p == 'A')
            a += pts;
        else
            b += pts;

        if (a == 10 && b == 10) {
            empate = true;
        }

        if (empate) {
            if (a >= (b + 2)) {
                cout << "A" << endl;
                return;
            };
            if (b >= (a + 2)) {
                cout << "B" << endl;
                return;
            }

        } else {
            if (a >= 11) {
                cout << "A" << endl;
                return;
            }
            if (b >= 11) {
                cout << "B" << endl;
                return;
            }
        }
    }
}

int main() {
    _;

    string s;
    cin >> s;

    // Solução esperta!
    cout << s[s.size() - 2] << endl;

    return 0;
}
