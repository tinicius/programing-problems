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

int fib(int n)
{

    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + (fib(n - 2) * 3);
    }
}

int main()
{
    _

        int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}