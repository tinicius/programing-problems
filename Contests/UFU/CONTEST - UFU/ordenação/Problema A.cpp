#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
 
    string word;

    vector<string> words;

    vector<vector<string>> palavras(101);

    while (cin >> word) {
 
        if (word[word.size() - 1] == '.' || word[word.size() - 1] == ',') {
            word.pop_back();
        }

        string lower = "";

        for (int i = 0; i < word.size(); i++) {
            lower += tolower(word[i]);
        }
    
        palavras[word.size()].push_back(lower);
        
    }

    for (int i = 0; i < palavras.size(); i++) {
        sort(palavras[i].begin(), palavras[i].end());

        for (int j = 0; j < palavras[i].size(); j++) {
            cout << palavras[i][j] << endl;
        }
        
    }
        
	return 0;
} 