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
    int n;
    cin >> n;

    vector<pair<int, int>> botas(61, {0, 0});

    while (n--) {
        int m;
        char l;

        cin >> m;
        cin >> l;

        if (l == 'D')
            botas[m].first += 1;
        else
            botas[m].second += 2;
    }

    int sum = 0;

    for (int i = 30; i <= 60; i++) {
        sum += min(botas[i].first, botas[i].second);
    }

    cout << sum << endl;

    return 0;
}