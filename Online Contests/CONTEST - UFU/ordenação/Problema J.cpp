#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _

	int t; cin >> t;

	while (t--) {
		
		int tam; cin >> tam;

		vector<string> words;

		for (int i = 0; i < tam; i++) {
			string word; cin >> word;
			words.push_back(word);
		}

		sort(words.begin(), words.end());
		
		string result = "";

		for (int i = 0; i < tam; i++) {
			result += words[i];
		}

		cout << result << endl;
		
		
	}
	

	return 0;
}