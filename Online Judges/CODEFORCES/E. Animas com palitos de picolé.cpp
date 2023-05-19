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

    int n = 6;

    map<int, int> tam;

    int max;
    int aux = 0;

    vector<int> a;

    while (n--) {
        int num;
        cin >> num;

        a.push_back(num);

        tam[num] = tam[num] + 1;

        if (tam[num] >= aux) {
            aux = tam[num];
            max = num;
        }
    }

    vector<int> b;

    int cs = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == max && cs == 4)
            b.push_back(a[i]);
        else if (a[i] != max)
            b.push_back(a[i]);
        else
            cs++;
    }

    // for (auto k : b) {
    //     cout << k << " ";
    // }

    if (b.size() == 0 || b.size() == 1 || tam[max] < 4) {
        cout << "Alien" << endl;
        return 0;
    }

    if (b[b.size() - 1] == b[b.size() - 2]) {
        cout << "Elephant" << endl;
    } else if (b[b.size() - 1] != b[b.size() - 2]) {
        cout << "Bear" << endl;
    } else
        cout << "Alien" << endl;

    return 0;
}