#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int n; cin >> n;

    vector<int> nums;
    vector<pair<int, int>> swaps;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    for (int i = 0; i < n; i++) {
        
        int a, b;
        int l = INF;

        for (int j = 0; j < n; j++) {
            
            if(nums[i] > nums[j] && nums[j] < l) {
                a = i;
                b = j;
                l = nums[j];
            }

        }

        cout << a << " " << b << endl;

        int aux = nums[a];
        nums[a] = nums[b];
        nums[b] = aux;

        swaps.push_back({a, b});
        
    }
    
    cout << swaps.size() << endl;

    for(auto i : swaps) {
        cout << i.first << " " << i.second << endl; 
    }
    
    return 0;
}