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

bool solve(string word, string completed) {
    for (int i = 0; i <= completed.size(); i++) {
        string sub = completed.substr(i, word.size());

        if (sub == word) {
            return true;
        }
    }

    return false;
}

int main() {
    _;

    string completed = "";

    for (int i = 1; i <= 45; i++) {
        if (i % 3 == 0) {
            completed += "F";
        }
        if (i % 5 == 0) {
            completed += "B";
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        string word;
        cin >> word;

        if (solve(word, completed))
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}