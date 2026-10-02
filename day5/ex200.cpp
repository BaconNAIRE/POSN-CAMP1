#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int count=0;

    for (char ch: text) {
        if (ch >= 'A' && ch <= 'Z') {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}