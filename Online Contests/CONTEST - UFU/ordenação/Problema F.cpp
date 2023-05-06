#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
   vector<int> idades(3001, 0);

   int t;

   while (cin >> t) {
      idades[t] += 1;
   }
   
   for (int i = 0; i < idades.size(); i++) {
      
      if (idades[i] != 0) {
         cout << i << " " << idades[i] << endl;
      }
      
   }
   
   

	return 0;
}