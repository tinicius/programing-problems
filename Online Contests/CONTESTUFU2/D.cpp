#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
#include <vector>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

int main() {
    _ unsigned short n;
    unsigned buffer;
    vector<unsigned> backup;
    vector<unsigned> vetor;

    while (cin >> n) {
        if (n == 0) break;
        // cin >> n;

        while (n--) {
            cin >> buffer;
            vetor.push_back(buffer);
        }
        backup = vetor;

        sort(vetor.rbegin(), vetor.rend());

        for (unsigned i = 0; i < vetor.size(); i++) {
            if (vetor[1] == backup[i]) {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}
