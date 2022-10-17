#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int search(string word, vector<string> lines) {

    if (word.length() == 1) {
        return 0;
    }

    for (int i = 0; i < word.size(); i++) {
        
        int p1 = count(lines.begin(), lines.end(), word.substr(0, word.size() - i));

         if (p1 == 0) {
           continue;
        } 

        int p2 = count(lines.begin(), lines.end(), word.substr(word.size() - i, word.size()));

         if (p2 == 0) {
           continue;
        } 

        if (p1 != 0 && p2 != 0) {
            return 1;
        } else {
            continue;
        }
        
    }
    
    return 0;

}

int main() { _
 
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        int t;
        cin >> t;

        vector<string> lines = {};

        for (int j = 0; j < t; j++) {
            
            string line;
            cin >> line;

            lines.push_back(line);

        }

        for (int j = 0; j < lines.size(); j++) {

            int res = search(lines[j], lines);
            cout << res;
            
        }

        cout << endl;
    
    }
    
  return 0;
}