#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 

        int n;
        cin >> n;

        int aux = n;

        int comportaram = 0;
        vector<string> nomes = {};

        while (aux--) {
            
            char c;
            string name;

            cin >> c;
            cin.ignore();
            cin >> name;

            if (c == '+') {
                comportaram++;
            }
            
            nomes.push_back(name);
        }

        sort(nomes.begin(), nomes.end());

        for (int i = 0; i < nomes.size(); i++) {
            cout << nomes[i] << endl;
        }

        cout << "Se comportaram: " << comportaram << " | Nao se comportaram: " << n - comportaram << endl;

		return 0;
}