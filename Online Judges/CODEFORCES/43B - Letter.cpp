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

  string heading;
  getline(cin, heading);

  unordered_map<char, int> tem;

  for (auto c : heading) {
    if (c == ' ') continue;
    tem[c]++;
  }

  string text;
  getline(cin, text);

  unordered_map<char, int> precisa;

  for (auto c : text) {
    if (c == ' ') continue;
    precisa[c]++;
  }

  for (char i = 'a'; i <= 'z'; i++) {
    if (precisa[i] > tem[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  for (char i = 'A'; i <= 'Z'; i++) {
    if (precisa[i] > tem[i]) {
            cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}