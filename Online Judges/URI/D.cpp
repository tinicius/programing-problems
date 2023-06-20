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
    // _;

    long long n;
    cin >> n;

    string s = to_string(n);

    cout << n << endl;

    if (s.size() == 1) return 0;

    while (to_string(n).size() > 1) {
        long long lastDigit = s[s.size() - 1] - '0';
        s.pop_back();

        n = ((n / 10) * 3) + lastDigit;

        cout << n << endl;
        s = to_string(n);
    }

    return 0;
}
