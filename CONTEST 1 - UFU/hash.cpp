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

        vector<string> words = {};

        for (int i = 0; i < n; i++) {
            
            string line;
            cin >> line;

            words.push_back(line);
        }
        
        bool boa = true;

        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < n; j++) {
                
                if (i != j) {
                   if (words[i] == words[j]) {
                        boa = false;
                    } 
                }
            
            }
            
        }

        if (boa) {
            cout << "A funcao eh boa.\n";
        } else {
            cout << "A funcao nao eh boa.\n";
        }
        
		return 0;
}