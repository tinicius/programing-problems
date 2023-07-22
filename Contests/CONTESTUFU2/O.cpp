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
    _;

    vector<long long> a;
    vector<long long> soma;

    long long n;
    while (cin >> n) a.push_back(n);

    long long sum = 0;

    for (long long i = 0; i < a.size(); i++) {
        sum += a[i];
        soma.push_back(sum);
    }

    sort(soma.begin(), soma.end());

    cout << soma[soma.size() - 1] << endl;

    return 0;
}