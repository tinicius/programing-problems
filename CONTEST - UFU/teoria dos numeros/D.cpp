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

        int c,
        l;

    while (cin >> c >> l)
    {
        int menor = min(c, l);

        int div = 1;

        for (int i = menor; i > 1; i--)
        {
            if ((c % i == 0) && (l % i == 0))
            {
                div = i;
                break;
            }
        }

        if (div == 1)
        {
            int maior = max(c, l);
            int aa = maior / menor;
            cout << aa << endl;
        }
        else
        {
            cout << (c / div) * (l / div) << endl;
        }
    }

    ;

    return 0;
}