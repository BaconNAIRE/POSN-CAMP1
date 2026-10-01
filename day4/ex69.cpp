#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int upper=0;
    int digit=0;
    getline(cin, s);
    for (char ch: s) {
        if (isupper(ch)) {
            upper++;
        } else if (isdigit(ch)) {
            digit++;
        }
    }
    cout << upper << '\n' << digit << '\n';
    return 0;
}