#include <bits/stdc++.h>
using namespace std;

int fibn(int n) {
    if (n<=1) {
        return n;
    }

    return fibn(n-1) + fibn(n-2);
}

int main() {
    int i;
    cin >> i;

    cout << fibn(i) << '\n';
    return 0;
}