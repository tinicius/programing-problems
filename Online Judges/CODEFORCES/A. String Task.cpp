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

bool isVogal(char c) {
    if (c == 'A' || c == 'a') return true;
    if (c == 'E' || c == 'e') return true;
    if (c == 'I' || c == 'i') return true;
    if (c == 'O' || c == 'o') return true;
    if (c == 'U' || c == 'u') return true;
    if (c == 'Y' || c == 'y') return true;
    return false;
}

int main() {
    _;

    string s;
    cin >> s;

    string ans;

    if (!isVogal(s[0])) ans.push_back('.');

    for (int i = 0; i < s.size(); i++) {
        if (!isVogal(s[i])) ans.push_back(tolower(s[i]));

        if (i + 1 < s.size())
            if (!isVogal(s[i + 1])) ans.push_back('.');
    }

    cout << ans << endl;
}
