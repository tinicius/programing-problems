#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void found(int tam, vector<int> nums, int cred, int t) {

    int pos1;
    int pos2;

    for (int i = 0; i < tam; i++) {
            
        for (int j = 0; j < tam; j++) {

            if (nums[i] + nums[j] == cred && i != j) {
                pos1 = i;
                pos2 = j;

                cout << "Caso #" << t + 1 << ": " << pos1 + 1 << " " << pos2 + 1 << endl;
                return;

            }
            
        }

    }
}

int main() { _
 
   int t; cin >> t;

   for (int l=0; l < t; l++) {
    
        int cred; cin >> cred;

        int tam; cin >> tam;

        vector<int> nums;

        for (int i = 0; i < tam; i++) {
            int num; cin >> num;
            nums.push_back(num);
        }

        found(tam, nums, cred, l);
   }
   
    
	return 0;
}