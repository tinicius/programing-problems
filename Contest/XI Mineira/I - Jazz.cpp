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

#define MAX 212345

vector<int> freq(MAX);
vector<int> dp(MAX + 1);

int f(int x) {
  if (x == 1) return freq[1];

  auto& p = dp[x];

  if (p) return p;

  vector<int> mul;

  for (int i = sqrt(x); i > 1; i--) {
    if (x % i == 0) {
      mul.push_back(i);
      mul.push_back(x / i);
    }
  }

  if (mul.size() == 0) return p = freq[x] + freq[1];

  sort(mul.begin(), mul.end(), greater<>());

  int aux = 0;

  for (auto mi : mul) {
    aux = max(aux, f(mi));
  }

  return p = freq[x] + aux;
}

void get_div(int x, vector<int>& div) {
  for (int i = sqrt(x); i > 1; i--) {
    if (x % i == 0) {
      div.push_back(i);
      div.push_back(x / i);
    }
  }
}

int main() {
  _;

  int n;
  cin >> n;

  vector<int> t(n);

  for (auto& ti : t) {
    cin >> ti;
    freq[ti]++;
  }

  sort(t.begin(), t.end());

  int ans = 0;

  for (auto ti : t) ans = max(ans, f(ti));

  cout << ans << endl;
};