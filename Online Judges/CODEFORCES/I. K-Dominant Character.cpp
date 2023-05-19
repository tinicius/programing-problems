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

    string s;
    cin >> s;

    int maior = INF;

    for (char i = 'a'; i <= 'z'; i++) {
        int m_atual = 0;

        int aux = 0;
        for (int j = 0; j < s.size(); j++) {
            if (i == s[j])
                aux = 0;
            else
                aux++;

            m_atual = max(m_atual, aux);
        }

    // cout << i << " " << m_atual << endl;
        maior = min(maior, m_atual);
    }

    cout << maior + 1 << endl;

    return 0;
}