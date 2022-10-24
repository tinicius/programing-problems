#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void printVector(vector<string> items) {

    for (int i = 0; i < items.size(); i++) {
        if(items[i-1]==items[i]){
            continue;
        }
        cout << items[i] <<endl;

    }
    cout << endl;
}
 
int main() { _
    set<string> palavras;
    string palavra;

    while(cin>>palavra){

        if (palavra[palavra.size() - 1] == '.' || palavra[palavra.size() - 1] == ',') {
            palavra.pop_back();
        }
        
        string lower = "";

        for (int i = 0; i < palavra.size(); i++) {
            lower += tolower(palavra[i]);
        }

        palavras.insert(lower);
    
    }

    for (auto i : palavras) {
        cout << i << endl;
    }

	return 0;
}