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

double n, k;

vector<double> a(1e5 + 10);

bool f(double p) {
    double pedacos = 0;

    for (int i = 0; i < n; i++) {
        pedacos += floor(a[i] / p);
    }

    return pedacos >= k;
};

int main() {
    _;

    cin >> n >> k;
    a.resize(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    double l = 0;
    double r = 1e8;

    cout << setprecision(20);

    for (int i = 0; i < 100; i++) {
        double m = (l + r) / 2;

        if (f(m))
            l = m;
        else
            r = m;

    }

    cout << l << endl;
}
