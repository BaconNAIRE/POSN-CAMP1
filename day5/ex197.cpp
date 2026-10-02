#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;

    cin >> n >> str;

    for (char ch: str) {
        cout << char(ch+=n);
    }
    cout << '\n';
    return 0;
}