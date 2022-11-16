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

ll fat(ll n)
{

    ll f = 1;

    for (ll i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    _

        ll n;
    cin >> n;

    std::vector<ll> nums;
    std::vector<ll>::iterator last;
    std::vector<ll>::iterator it;

    for (ll i = n; i > 0; i--)
    {
        ll fatorial = fat(i);

        string caracter = to_string(fatorial);

        ll soma = 0;

        for (ll j = 0; j < caracter.size(); j++)
        {
            soma += stoi(string(1, caracter[j]));
        }

        while (soma > 9)
        {
            caracter = to_string(soma);

            soma = 0;

            for (ll j = 0; j < caracter.size(); j++)
            {
                soma += stoi(string(1, caracter[j]));
            }
        }

        nums.push_back(soma);
    }

    last = std::unique(nums.begin(), nums.end());

    cout << "[";

    for (it = nums.begin(); it != last; ++it)
    {

        if ((it + 1) == last)
        {
            std::cout << *it;
        }
        else
        {
            std::cout << *it << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}