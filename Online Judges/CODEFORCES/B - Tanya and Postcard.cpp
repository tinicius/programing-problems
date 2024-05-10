#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<ll> cnt_a(1000);
vector<ll> cnt_b(1000);

int main() {
  _;

  string s, t;
  cin >> s >> t;

  for (auto c : s) cnt_a[c]++;
  for (auto c : t) cnt_b[c]++;

  ll y = 0;
  ll w = 0;

  for (char c = 'a'; c <= 'z'; c++) {
    ll x = min(cnt_a[c], cnt_b[c]);
    y += x;

    cnt_a[c] -= x;
    cnt_b[c] -= x;
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    ll x = min(cnt_a[c], cnt_b[c]);
    y += x;

    cnt_a[c] -= x;
    cnt_b[c] -= x;
  }

  for (char c = 'a'; c <= 'z'; c++) {
    w += min(cnt_a[c], cnt_b[c - 32]);
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    w += min(cnt_a[c], cnt_b[c + 32]);
  }

  cout << y << " " << w << endl;

  return 0;
}