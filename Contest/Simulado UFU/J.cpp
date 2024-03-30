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

int main() {
  _;

  string n;
  cin >> n;

  if (n.size() > 11) {
    cout << "Nao" << endl;
    return 0;
  }

  set<ll> ans;

  bool rep = false;

  for (int i = 0; i < n.size(); i++) {
    for (int j = i; j < n.size(); j++) {
      string sub;

      for (int k = i; k <= j; k++) sub.push_back(n[k]);

      int aux = 1;

      for (auto c : sub) aux *= (c - '0');

      if (ans.find(aux) != ans.end()) {
        rep = true;
      } else {
        ans.insert(aux);
      }
    }
  }

  if (rep)
    cout << "Nao" << endl;
  else
    cout << "Sim" << endl;

  return 0;
}