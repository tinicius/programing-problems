

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

int main() {
    _;

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];

        long long op = 0;
        long long sum = 0;

        bool aux = 1;

        for (long long i = 0; i < n; i++) {
            if (a[i] < 0) {
                if (aux) {
                    op++;
                    aux = 0;
                }
            } else if (a[i] > 0) {
                aux = 1;
            }

            sum += abs(a[i]);
        }

        cout << sum << " ";
        cout << op << endl;
    }
}
