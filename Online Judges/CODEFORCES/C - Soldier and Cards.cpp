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

void print(queue<int> a) {
  while (!a.empty()) {
    int x = a.front();
    a.pop();
    cout << x << " ";
  }

  cout << endl;
}

int main() {
  _;

  ll n;
  cin >> n;

  queue<int> p1;
  queue<int> p2;

  int k1;
  cin >> k1;

  vector<int> a(k1);
  for (auto& ai : a) cin >> ai;

  for (int i = 0; i < k1; i++) p1.push(a[i]);

  int k2;
  cin >> k2;

  vector<int> b(k2);
  for (auto& bi : b) cin >> bi;

  for (int i = 0; i < k2; i++) p2.push(b[i]);

  int t = 1e8;

  int ans = 0;

  while (!p1.empty() and !p2.empty() and t > 0) {
    ans++;

    int x = p1.front();
    p1.pop();

    int y = p2.front();
    p2.pop();

    // cout << x << " " << y << endl;
    // cout << endl;

    if (x > y) {
      p1.push(y);
      p1.push(x);
    } else {
      p2.push(x);
      p2.push(y);
    }

    t--;
  }

  if (!p1.empty() and !p2.empty()) {
    cout << -1 << endl;
    return 0;
  }

  if (!p1.empty()) {
    cout << ans << " 1" << endl;
  } else {
    cout << ans << " 2" << endl;
  }

  return 0;
}