#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
        string line;
        cin >> line;

        if (line == "amarela" || line == "vermelha" || line == "azul") {
            cout << "primaria\n";
        } else if (line == "laranja" || line == "verde" || line == "roxa") {
            cout << "secundaria\n";
        } else {
            cout << "outra\n";
        }
         
		return 0;
}