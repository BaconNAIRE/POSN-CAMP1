#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for (string::iterator it=text.end(); it!=text.begin();) {
        it--;
        cout << *it;
    }
    cout << '\n';
    return 0;
}