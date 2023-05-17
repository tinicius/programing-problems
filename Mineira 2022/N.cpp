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

struct sort_pred {
    bool operator()(const std::pair<ll, ll> &left,
                    const std::pair<ll, ll> &right) {
        return (left.first + left.second) >= (right.first + right.second);
    }
};

struct sort_pred2 {
    bool operator()(const std::pair<ll, ll> &left,
                    const std::pair<ll, ll> &right) {
        return (right.first + right.second) <= (left.first + left.second);
    }
};

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    int somak = 0;
    int somal = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        somak += a[i];
    };
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
        somal += b[i];
    }

    ll k, l;
    cin >> k >> l;

    vector<pair<ll, ll>> p;
    for (ll i = 0; i < n; i++) {
        p.push_back({a[i], b[i]});
    }

    vector<ll> ai;
    vector<ll> bi;

    sort(p.begin(), p.end(), sort_pred());

    for (auto k : p) {
        ai.push_back(k.first);
        bi.push_back(k.second);
        // cout << k.first << " " << k.second << endl;
    }

    ll ans = 0;

    for (ll i = 0; i < k; i++) ans += ai[i];
    for (ll i = 0; i < l; i++) ans += bi[i];

    // cout << ans << endl;

    sort(p.begin(), p.end(), sort_pred2());
    ai.clear();
    bi.clear();
    for (auto k : p) {
        ai.push_back(k.first);
        bi.push_back(k.second);
        // cout << k.first << " " << k.second << endl;
    }

    ll as = 0;

    for (ll i = 0; i < k; i++) as += ai[i];
    for (ll i = 0; i < l; i++) as += bi[i];

    cout << max(ans, as) << endl;

    return 0;
}