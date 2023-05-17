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

struct sort_pred {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
        if (left.first == right.first) {
            return left.second > left.second;
        }
        return left.first > right.first;
    }
};

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0;

    for (int i = 0; i < n; i++) {
        if (i - 1 >= 0)
            if (s[i] == 'a' && s[i - 1] == 'a') {
                a++;
                continue;
            }

        if (i + 1 < n)
            if (s[i] == 'a' && s[i + 1] == 'a') {
                a++;
                continue;
            }
    }

    cout << a << endl;

    return 0;
}