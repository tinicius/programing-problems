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
        cin.ignore();

        int positivas = 0;
        int negativas = 0;
        int neutras = 0;

        for (int i = 0; i < n; i++) {
            
            string line;
            getline(cin, line);
            
            string word;
            vector<string> words = {};

            stringstream S(line);

            while (getline(S, word, ' ')) {
                words.push_back(word);
            }

            int pos = 0;
            int neg = 0;

            for (int i = 0; i < words.size(); i++) {

                int found = words[i].find('!');
                if (found != -1) {
                    words[i] = words[i].erase(found, 1);
                }

                if (words[i] == "excelente" || words[i] == "bom" || words[i] == "otimo" || words[i] == "adoro" || words[i] == "amo") {
                    
                    if (i - 1 >= 0) {
                        
                        if (words[i-1] == "nao") {
                            neg++;
                        } else {
                            pos++;
                        }
                        
                    } else {
                        pos++;
                    }

                } else if (words[i] == "ruim" || words[i] == "pessimo" || words[i] == "odeio" || words[i] == "droga" || words[i] == "fraco") {
                    
                    if (i - 1 >= 0) {
                        
                        if (words[i-1] == "nao") {
                            pos++;
                        } else {
                            neg++;
                        }
                        
                    } else {
                        neg++;
                    }

                }

            }

            if (pos > neg) {
                positivas++;
            } else if (pos < neg) {
                negativas++;
            } else {
                neutras++;
            }
            
        }

        if (positivas > negativas) {
            cout << "positivo" << endl;
        } else if (positivas < negativas) {
            cout << "negativo" << endl;
        } else {
            cout << "neutro" << endl;
        }
                 
		return 0;
}