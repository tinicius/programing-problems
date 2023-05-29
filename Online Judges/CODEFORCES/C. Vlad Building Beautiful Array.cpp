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

int main() {
    _;

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);

        vector<ll> par;
        vector<ll> impar;

        bool hasOne = false;

        for (ll i = 0; i < n; i++) {
            ll c;
            cin >> c;
            a[i] = c;

            if (c == 1) hasOne = true;

            if (c % 2 == 0)
                par.push_back(c);
            else
                impar.push_back(c);
        }

        sort(par.begin(), par.end());
        sort(impar.begin(), impar.end());

        bool podePar = true;

        // 3 -> 1
        //5 -> 1 3 
        //7 -> 1 3 5 

        for (ll i = 0; i < n; i++) {
            if (a[i] % 2 == 0) continue;
            if (hasOne) continue;

            if (impar.size() == 0) {
                podePar = false;
                break;
            }

            if (impar[0] >= a[i]) {
                podePar = false;
                break;
            }
        }

        bool podeImpar = true;

        
        
        // 4 - 1 3 


        for (ll i = 0; i < n; i++) {
            if (a[i] % 2 != 0) continue;
            if (hasOne) continue;

            if (impar.size() == 0) {
                podeImpar = false;
                break;
            }

            if (impar[0] >= a[i]) {
                podeImpar = false;
                break;
            }
        }

        if (podePar || podeImpar) {
            // dbg(podePar);
            // dbg(podeImpar);
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}