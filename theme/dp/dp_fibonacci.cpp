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

vector<int> memo(100, -1);

int fibonnaciRecursive(int i) {
    auto& p = memo[i];

    if (p != -1) return p;

    if (i == 0 || i == 1)
        return p = 1;
    else
        return p = fibonnaciRecursive(i - 1) + fibonnaciRecursive(i - 2);
}

int fibonnaciIterative(int i) {
    vector<int> fib(i + 1);

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < fib.size(); i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[i];
};

int fibonnaciTwoStates(int i) {
    int a, b;

    a = 1;
    b = 1;

    for (int j = 2; j <= i; j++) {
        swap(a, b);
        b = a + b;
    }

    return b;
}

int main() {
    _;
    // 1, 1, 2, 3, 5, 8

    cout << fibonnaciRecursive(5) << endl;
    cout << fibonnaciIterative(5) << endl;
    cout << fibonnaciTwoStates(5) << endl;
}
