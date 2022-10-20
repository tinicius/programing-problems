#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int cm; cin >> cm;

    vector<int> cres;

    for (int i = 0; i < 12; i++) {
        int n;
        cin >> n;
        
        cres.push_back(n);
    }

    int moves = 0;
    int size = 0;
    int pos = cres.size() - 1;

    sort(cres.begin(), cres.end());

    while (size < cm) {     
        
        size += cres[pos];     
        pos--;   
        moves++;

        if (pos < 0) {
            break;
        }
        
    }

    if (moves > 12 || size < cm) {
        cout << -1 << endl;
        return 0;
    }

    cout << moves << endl;

	return 0;
}