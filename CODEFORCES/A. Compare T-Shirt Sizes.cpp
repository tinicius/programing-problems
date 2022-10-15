#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _
 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        string a, b;
        cin >> a;
        cin >> b;

        if (a[a.length() - 1] == b[b.length() - 1]) {
            
            if (a[a.length() - 1] == 'M') {
                cout << '=' << endl;
            } else if(a[a.length() - 1] == 'S') {

                int nA = a.length() - 1;
                int nB = b.length() - 1;

                if (nA > nB) {
                    cout << '<' << endl;
                } else if (nA < nB) {
                    cout << '>' << endl;
                } else {
                    cout << '=' << endl;
                }

            } else {

                int nA = a.length() - 1;
                int nB = b.length() - 1;

                if (nA > nB) {
                    cout << '>' << endl;
                } else if (nA < nB) {
                    cout << '<' << endl;
                } else {
                    cout << '=' << endl;
                }

            }
            
        } else {
            char lastA = a[a.length() - 1];
            char lastB = b[b.length() - 1];
            
            if (lastA == 'L') {
                cout << '>' << endl;
            } else if(lastA == 'S') {
                cout << '<' << endl;
            } else if (lastB == 'S') {
                cout << '>' << endl;
            } else if (lastB == 'L') {
                 cout << '<' << endl;
            } 
            
        }
        
    }
    
  return 0;
}