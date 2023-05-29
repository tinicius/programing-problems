#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <set>
#include <algorithm>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

int main() {
    _
    unsigned short q, d, p;
    while(cin >> q >> d >> p){
    cout << ((d * p) + ((d * p) / 2)) << endl;
    }

    return 0;
}
