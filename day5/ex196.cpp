#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for (char ch: text) {
        cout << (char)toupper(ch);
    }
    cout << '\n';
    return 0;
}