#include <bits/stdc++.h>
#include <ctype.h>
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
    _;

    int t;
    cin >> t;

    cin.ignore();

    while (t--) {
        string word;

        getline(cin, word);

        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            if (isalpha(c)) c += 3;

            word[i] = c;
        }

        for (int i = 0; i < word.size() / 2; i++) {
            swap(word[i], word[word.size() - i - 1]);
        }

        for (int i = word.size() / 2; i < word.size(); i++) {
            char c = word[i];
            c -= 1;
            word[i] = c;
        }

        cout << word << endl;
    }

    return 0;
}