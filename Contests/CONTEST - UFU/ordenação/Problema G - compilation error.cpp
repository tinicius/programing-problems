#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
	#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    vector<ll> nums;
    vector<ll> numsGreater;

    ll n;

    while (cin >> n) {
        nums.push_back(n);
        numsGreater.push_back(n);
    }

    sort(nums.begin(), nums.end());
    sort(numsGreater.begin(), numsGreater.end(), greater<>());

    for (ll i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    for (ll i = 0; i < numsGreater.size(); i++) {
        cout << numsGreater[i] << " ";
    }
    cout << endl;
    
	return 0;
}