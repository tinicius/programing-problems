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

int main() {
    ll q;
    cin >> q;

    while (q--) {
        ll k, m;
        cin >> k >> m;

        vector<ll> a;

        while (k > 0) {
            a.push_back(k % 10);
            k /= 10;
        }

        reverse(a.begin(), a.end());

        while (m--) {
            int t = 0;

            for (int i = a.size() - 1; i >= 0; i--) {
                if (a[i] > 4) {
                    t = i;
                    break;
                }
            }

            for (int i = a.size() - 1; i >= t; i--) {
                if (a[i] * 2 > 9) {
                    a[i] = (a[i] * 2) % 10;
                    a.insert(a.begin() + i, 1);

                } else {
                    a[i] *= 2;
                }
            }
        }
        for (auto j : a) cout << j;
        cout << endl;
    }

    return 0;
}