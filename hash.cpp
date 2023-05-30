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

int MAX = 13;

vector<int> vetor(MAX, -1);

const int inc = 1024;

int hash2(int key, int it, int max) {
    int value = (key + inc) * it;

    int quad = pow(value, 2);

    string s = to_string(quad);

    if (s.size() % 2 == 0) s += '0';

    string mid;
    
    mid += s[(s.size() / 2) - 1];
    mid += s[s.size() / 2];
    mid += s[(s.size() / 2) + 1];

    dbg(s);
    dbg(mid);

    int index = atoi(mid.c_str()) % max;

    dbg(it);
    dbg(index);

    return index;
}

int hash_duplo(int key, int max) {
    int index;

    index = key % max;

    int it = 0;

    while (vetor[index] != -1) {
        index = hash2(index, it, max);
        it++;
    }

    return index;
}

int main() {
    _;

    int n;

    while (cin >> n) {
        int index = hash_duplo(n, MAX);

        vetor[index] = n;

        for (auto i : vetor) {
            if (i != -1) cout << " ";
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
