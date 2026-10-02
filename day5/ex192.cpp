#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; int count=0;
    getline(cin, str);

    for (char ch: str) {
        count++;
    }

    cout << count << '\n';
    return 0;
}