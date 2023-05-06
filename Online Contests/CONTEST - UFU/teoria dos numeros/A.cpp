#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    _

        ll x,
        y, n;

    while (cin >> x >> y >> n)
    {

        if ((x - y) % n == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}