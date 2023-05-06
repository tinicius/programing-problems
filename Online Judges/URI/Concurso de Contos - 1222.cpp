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
    _;

    int n;  // numero de palavras do texto
    int l;  // max linhas por pagina
    int c;  // max caractes por linha

    cin >> n >> l >> c;

    int numlinhas = 1;
    int clinhas = 0;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (clinhas + word.size() > c) {
            numlinhas++;
            clinhas = word.size();
        } else {
            clinhas += word.size();
        }
    }

    if (numlinhas == l) {
        numlinhas++;
    }

    dbg(numlinhas);

    cout << l / numlinhas;

    return 0;
}