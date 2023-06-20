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

int main() {
    _;

    ifstream fin("mixmilk.in");

    int c1, b1, c2, b2, c3, b3;
    fin >> c1 >> b1 >> c2 >> b2 >> c3 >> b3;

    vector<int> ba(3);
    ba[0] = b1;
    ba[1] = b2;
    ba[2] = b3;

    vector<int> ca(3);
    ca[0] = c1;
    ca[1] = c2;
    ca[2] = c3;

    int b = 0;

    for (int i = 0; i < 100; i++) {
        int l = b % 3;
        int r = (b + 1) % 3;

        ba[r] += ba[l];

        ba[l] = 0;

        if (ba[r] > ca[r]) {
            ba[l] = ba[r] - ca[r];
            ba[r] = ca[r];
        }

        b++;
    }

    ofstream fout("mixmilk.out");

    fout << ba[0] << endl;
    fout << ba[1] << endl;
    fout << ba[2] << endl;
}
