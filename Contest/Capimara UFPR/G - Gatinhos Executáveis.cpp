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

const int K = 16;

map<int, int> cnt;

int to_i(char c) {
  if ('0' <= c && c <= '9') return c - '0';

  return (c - 'a') + 10;
}

struct Vertex {
  int next[K];
  bool output = false;

  Vertex() { fill(begin(next), end(next), -1); }
};

vector<Vertex> trie(1);

void add_string(string const& s) {
  int v = 0;

  for (char ch : s) {
    // int c = ch - 'a';
    int c = ch;

    if (trie[v].next[to_i(c)] == -1) {
      trie[v].next[to_i(c)] = trie.size();
      trie.emplace_back();
    }

    v = trie[v].next[to_i(c)];

    cnt[v]++;
  }

  trie[v].output = true;
}

void find_string(string const& s) {
  int v = 0;

  string aux;

  for (char ch : s) {
    v = trie[v].next[to_i(ch)];

    aux += ch;

    if (cnt[v] == 1) {
      cout << aux << endl;
      return;
    }
  }
}

int main() {
  _;

  int n;
  cin >> n;

  vector<string> words(n);

  for (auto& wi : words) {
    cin >> wi;
    add_string(wi);
  }

  for (auto wi : words) {
    find_string(wi);
  }

  return 0;
}
