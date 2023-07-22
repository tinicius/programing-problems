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
      
      string word;
      cin >> word;

      string ord = "";
      int sum = 0;

      ord.push_back(word[0]);

      for (int i = 1; i < word.size(); i++) {
         
         ord.push_back(word[i]);
         sort(ord.begin(), ord.end());
         int pos = ord.find_last_of(word[i]);
         
         sum += (ord.size() - pos);   
         
      }
            
      cout << sum << endl;
   }
   
	return 0;
}