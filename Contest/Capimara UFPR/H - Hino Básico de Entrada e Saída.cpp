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

  string line;

  unordered_set<string> ans;

  vector<string> words;

  while (getline(cin, line)) {
    string w;

    for (int i = 0; i < line.size(); i++) {
      if (line[i] != ',' and line[i] != '!' and line[i] != ' ') {
        w += line[i];
      } else {
        if (w.size() == 5) {
          if (ans.find(w) == ans.end()) {
            ans.insert(w);
            words.push_back(w);
          }
        }

        w = "";
      }
    }

    if (w.size() == 5) {
      if (ans.find(w) == ans.end()) {
        ans.insert(w);
        words.push_back(w);
      }
    }
  }

  for (auto i : words) cout << i << endl;

  return 0;
};
