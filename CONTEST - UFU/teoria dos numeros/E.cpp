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

int main()
{
    _

        int x,
        y;

    cin >> x >> y;
    int sum = 0;

    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }

    cout
        << sum << endl;

    return 0;
}