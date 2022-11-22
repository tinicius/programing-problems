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

        vector<int> nums;

        for (int i = 0; i < tam; i++) {
            int num; cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end());

        int menor = INF;

        for (int i = 1; i < tam - 1; i++) {
            
            int dif1 = abs(nums[i - 1] - nums[i]);    
            int dif2 = abs(nums[i + 1] - nums[i]);

            int m = dif1 + dif2;

            if (m < menor) {
                menor = m;
            }
        }

        cout << menor << endl;
        
        

    }
    
    
	return 0;
}