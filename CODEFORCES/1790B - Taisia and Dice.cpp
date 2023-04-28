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

struct sort_pred_string {
    bool operator()(const std::string &left, const std::string &right) {
        if (left.size() > right.size()) {
            return true;
        } else if (right.size() > left.size()) {
            return false;
        }

        return left > right;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        // seq
        int dados = n - 1;
        int raux = r;

        for (int i = dados; i >= 1; i--) {
            cout << raux / i << " ";
            raux = raux - (raux / i);
        }

        cout << (s - r) << endl;

    }

    return 0;
}