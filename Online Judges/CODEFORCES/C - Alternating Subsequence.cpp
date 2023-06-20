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

pair<ll, ll> maxsum(vector<ll> a, ll n, ll sign) {
    vector<ll> pos;

    for (ll i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (sign == 1) {
                pos.push_back(a[i]);
                sign = 0;
            } else {
                if (pos.size() == 0) continue;
                if (a[i] > pos[pos.size() - 1]) {
                    pos.pop_back();
                    pos.push_back(a[i]);
                }
            }
        } else {
            if (sign == 0) {
                pos.push_back(a[i]);
                sign = 1;
            } else {
                if (pos.size() == 0) continue;
                if (a[i] > pos[pos.size() - 1]) {
                    pos.pop_back();
                    pos.push_back(a[i]);
                }
            }
        }
    }

    ll ans = 0;

    for (ll i = 0; i < pos.size(); i++) ans += pos[i];

    ll siz = pos.size();

    // for (auto i : pos) {
    //     cout << i << " ";
    // }
    // cout << endl;
    return {siz, ans};
}

int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        for (ll i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pos = maxsum(a, n, 1);
        pair<ll, ll> neg = maxsum(a, n, 0);

        if (pos.first == 0)
            cout << neg.second << endl;
        else if (neg.first == 0)
            cout << pos.second << endl;
        else {
            if (pos.first > neg.first) {
                cout << pos.second << endl;
            }

            else if (neg.first > pos.first) {
                cout << neg.second << endl;
            }

            else {
                cout << max(neg.second, pos.second);
            }
        }
    }

    return 0;
}
