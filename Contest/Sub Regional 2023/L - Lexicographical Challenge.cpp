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

  string s;
  cin >> s;

  int k;
  cin >> k;

  for (int i = 0; i < k; i++) {
    string aux;
    vector<int> idx;

    for (int j = i; j < s.size(); j += k) {
      idx.push_back(j);
      aux.push_back(s[j]);
    }
    
    sort(aux.begin(), aux.end());

    for (int j = 0; j < idx.size(); j++) {
      s[idx[j]] = aux[j];
    }
  }

  cout << s << endl;

  return 0;
}