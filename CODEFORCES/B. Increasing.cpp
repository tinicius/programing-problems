#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void testCase() {

    int n;
    cin >> n;

    vector<int> vetor = {};
    bool can = true;

    for (int j = 0; j < n; j++) {
        
        int num;
        cin >> num;

        if (can) {

            for (int l = 0; l < vetor.size(); l++) {
            
            if(num == vetor[l]) {
                can = false;
                //return;
            }

        }

        }
        
        vetor.push_back(num);
        
    }

    if(can) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main() { _
 
        int t;
        cin >> t;

        for (int i = 0; i < t; i++) {
            
            testCase();

        }
           
    
		return 0;
}