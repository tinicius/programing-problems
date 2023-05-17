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
    int n;
    cin >> n;

    int j1, j2, m1, m2;
    cin >> j1 >> j2 >> m1 >> m2;

    int john = 0;
    int mary = 0;

    john = j1 + j2;
    mary = m1 + m2;

    vector<int> cards(14);

    for (int i = 1; i <= 13; i++) {
        cards[i] = 4;
    }

    cards[j1] = cards[j1] - 1;
    cards[j2] = cards[j2] - 1;
    cards[m1] = cards[m1] - 1;
    cards[m2] = cards[m2] - 1;

    while (n--) {
        int c;
        cin >> c;

        if (c >= 11) {
            john += 10;
            mary += 10;
        } else {
            john += c;
            mary += c;
        }

        cards[c] = cards[c] - 1;
    }

    for (int i = 1; i <= 13; i++) {
        if (cards[i] > 0) {
            if (i >= 10) {
                if (john + 10 > 23 && mary + 10 < 24) {
                    cout << i << endl;
                    return 0;
                }

                if (mary + 10 == 23) {
                    cout << i << endl;
                    return 0;
                }

            } else {
                if (john + i > 23 && mary + i < 24) {
                    cout << i << endl;
                    return 0;
                }

                if (mary + i == 23) {
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}