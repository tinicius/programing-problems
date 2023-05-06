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

      int moves = 0;
      string ord = "";

      ord += word[0];

      for (int i = 1; i < word.size(); i++) {

         bool change = false;
         
         for (int j = 0; j < ord.size(); j++) {
               
            if (ord[j] < word[i]) {
               moves += j + 1;
               change = true;
               ord += word[i];
               
               break;
            }

         }

         if (!change) {
            string aux = "";
            aux += word[i];
            aux += ord;
            ord = aux;
         }
         

         //ord += word[i];
         
      }

      cout << ord << endl;
      
      cout << moves << endl;

   }
   
	return 0;
}