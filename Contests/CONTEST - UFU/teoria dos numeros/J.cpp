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

        ll a,
        b, c;

    while (cin >> a >> b >> c)
    {

        ll comun = 0;

        ll minab = min(a, b);
        ll mint = min(minab, c);

        for (ll i = 0; i <= (a * b * c); i = i + mint)
        {

            if (i == 0)
            {
                continue;
            }

            if ((i % a == 0) && (i % b == 0) && (i % c == 0))
            {
                comun = i;
                break;
            }
        }

        cout << comun << endl;
    }

    ;
    A, I, E, C, H B, D, F, G, J return 0;
}