#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
void printVector(vector<int> items) {

    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << " ";
    }

    cout << endl;

}

int main() { _
 
    set<int> nums;

    nums.insert(1);
    nums.insert(2);
    nums.insert(4);
    nums.insert(3);
    nums.insert(1);
    
    for (auto i : nums) {
        cout << i << " ";
    }

    cout << endl;
    
	return 0;
}