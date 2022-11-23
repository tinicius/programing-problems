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

bool isPrime(int n)
{

    if (n == 1 || n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool verificaPrimo(unsigned int entrada)
{
    int marcador = 1;
    int i;

    for (i = 2; i <= sqrt(entrada); i++)
    {
        if (entrada % i == 0)
        {
            marcador = 0;
            break;
        }
    }

    if (marcador == 1 && entrada > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    _

        ll n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        if (verificaPrimo(num))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    ;

    return 0;
}