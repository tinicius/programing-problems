#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() { _

    string line;
    getline(cin, line);

    
        
        string word;
        vector<string> words = {};

        stringstream S(line);

        int count = 0;

        vector<int> nums = {};
        int dia;
        char isSol;
        int temp;

        while (getline(S, word, ',')) {

            if (count == 0) {
                
                string num;
                
                stringstream numStream(word);

                while (getline(numStream, num, ' ')) {
                    nums.push_back(stoi(num));
                }
                
            }

            if(count == 1) {
                dia = stoi(word);
            }

            if(count == 2) {
                isSol = word.c_str()[0];
            }

            if(count == 3) {
                temp = stoi(word);
            }

            count++;
        }
        
            for (int i = 0; i < nums.size(); i++) {

                int code = nums[i];

                if (isSol == 'T' && temp > 30) {
                    code = code * 2;
                }
            

                if (dia == 2) {
                    code = code + 3;
                } else {
                    code = code - 3;
                }
                
                char letra = code;
                cout << letra;
            }
        
            getline(cin, line);
    
    

    return 0;
}