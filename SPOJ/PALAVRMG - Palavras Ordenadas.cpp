#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int p;
	cin >> p;

	while (p--) {
		
		string word;

		cin >> word;
		
		bool isOrd = true;

		for (int i = 0; i < word.size() - 1; i++) {
			
			if (tolower(word[i]) >= tolower(word[i+1])) {
				isOrd = false;
				break;
			}

		}

		if (isOrd) {
			cout << word << ": " << "O\n";
		} else {
			cout << word << ": " << "N\n";
		}


	}

	return 0;
}