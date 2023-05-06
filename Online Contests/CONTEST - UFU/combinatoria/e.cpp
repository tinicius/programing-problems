#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int main()
{

    int a, q;
    cin >> a >> q;

    double pos = 1.0 / a;
    std::cout << std::fixed;

    pos = pow(pos, q) * 100.0;

    cout << pos << "%" << endl;

    return 0;
}
