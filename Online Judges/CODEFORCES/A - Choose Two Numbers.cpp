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

int main() {
    int al, bl;
    cin >> al;
    ;

    set<int> a, b;

    set<int> all;

    for (int i = 0; i < al; i++) {
        int num;
        cin >> num;
        a.insert(num);
        all.insert(num);
    }

    cin >> bl;

    for (int i = 0; i < bl; i++) {
        int num;
        cin >> num;
        b.insert(num);
        all.insert(num);
    }

    for (int i : a) {
        for (int j : b) {
            // if (all.find(i + j) == all.end()) cout << i << " " << j << " ";
            if (all.find(i + j) == all.end()) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}