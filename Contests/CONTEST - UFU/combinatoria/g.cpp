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

double fat(int n, int m)
{

    ll f = 1;
    ll f2 = 1;

    for (int i = 1; i <= n; i++)
    {
        f *= i;

        if (i <= (n - m))
            f2 *= i;
    }

    ll per = f / f2;
    cout << per << endl;
}

int main()
{
    _

        int n;
    cin >> n;

    fat(n, 3);

    return 0;
}