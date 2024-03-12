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

ll n,     // farinha
    m,    // n de recheios
    c_0,  // farinha pra um sem recheio
    d_0;  // preco de um sem recheio

vector<ll> a(101, 0);  // recheio disponiveis
vector<ll> b(101, 0);  // qnt de recheio pra fazer um m_i
vector<ll> c(101, 0);  // qnt de farinha pra fazer um m_i
vector<ll> d(101, 0);  // preco de um m_i

vector<vector<ll>> dp(101, vector<ll>(1001, -INF));

ll cook(ll m_i, ll dough) {
  // cout << m_i << " " << dough << endl;

  if (m_i == m) return 0;

  auto& p = dp[m_i][dough];

  if (p != -INF) {
    //  dbg(dp[2][0]);
    // cout << m_i << " " << dough << endl;

    return p;
  }

  ll aux = 0;

  for (ll i = 0; i <= min(dough / c[m_i], a[m_i] / b[m_i]); i++) {
    ll restante = dough - (c[m_i] * i);

    ll sem_recheios = restante / c_0;

    ll so_recheados = cook(m_i + 1, restante) + d[m_i] * i;

    ll ambos = cook(m_i + 1, restante - (c_0 * sem_recheios)) + d[m_i] * i +
               d_0 * sem_recheios;

    aux = max({aux, so_recheados, ambos});
  }

  for (ll i = 0; i <= dough / c_0; i++) {
    aux = max(aux, cook(m_i + 1, dough - (c_0 * i)) + d_0 * i);
  }

  return p = aux;
}

int main() {
  _;

  cin >> n >> m >> c_0 >> d_0;
  for (ll i = 0; i < m; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  cout << cook(0, n) << endl;

  return 0;
}