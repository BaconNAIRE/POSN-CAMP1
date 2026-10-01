#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int t=0;
    getline(cin, str);

    for (char ch: str) {
        if (isdigit(ch)) {
            t = t + (ch - '0');
        }
    }
    cout << t << '\n';
    return 0;
}