#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    
    int p; cin >> p;

    while (p--) {
        
        string proibida, teste;
        cin >> proibida;
        cin >> teste;

        map<char, int> proibidaChars;
        map<char, int> testeChars;

        for (int i = 0; i < proibida.length(); i++) {
            proibidaChars[proibida[i]] += 1;
        }

        for (int i = 0; i < teste.length(); i++) {
            if(i == 0 || i == teste.length() - 1) {
                testeChars[teste[i]] += 2;    
            } else {
                testeChars[teste[i]] += 1;
            }
        }
        
        bool isIgual = true;

        for (auto word : proibidaChars) {

            if (word.second > testeChars[word.first]) {
                isIgual = false;
            }
            
        }

        if (isIgual) {
            cout << "S\n";
        } else {
            cout << "N\n";
        }
        
    }
    
	return 0;
}