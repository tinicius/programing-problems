#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;
    
        vector<int> nums;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            
            nums.push_back(num);        
        }

        int sum = 1;
        int moves = 0;
                
        while (sum > 0) {

            sum = 0;
         
            for (int i = 0; i < nums.size(); i++) {
                
                if (nums[i] == 0 || i == nums.size() - 1) {
                    moves++; 
                    //sum += nums[i];
                }
                
                if(nums[i] != 0) {
                    nums[i] = nums[i] - 1;
                    sum += nums[i];
                }

            }

            for (int i = 0; i < n; i++) {
                cout << nums[i] << " ";
            }

            cout << endl;

        }
        
        cout << moves << endl;
        
    }
       
    
	return 0;
}