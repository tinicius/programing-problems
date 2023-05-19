#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    // F, M, S
    if (s1 == "rock") {
        if (s2 == "rock") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "S" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
        if (s2 == "paper") {
            if (s3 == "rock") cout << "M" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
        if (s2 == "scissors") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "F" << endl;
        }
    }

    if (s1 == "paper") {
        if (s2 == "rock") {
            if (s3 == "rock") cout << "F" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
        if (s2 == "paper") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "S" << endl;
        }
        if (s2 == "scissors") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "M" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
    }

    if (s1 == "scissors") {
        if (s2 == "rock") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "M" << endl;
        }
        if (s2 == "paper") {
            if (s3 == "rock") cout << "?" << endl;
            if (s3 == "paper") cout << "F" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
        if (s2 == "scissors") {
            if (s3 == "rock") cout << "S" << endl;
            if (s3 == "paper") cout << "?" << endl;
            if (s3 == "scissors") cout << "?" << endl;
        }
    }

    return 0;
}