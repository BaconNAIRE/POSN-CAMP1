#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e=0,o=0;
    cin >> n;
    for (int i=1; i<=n; i+=2) {
        o += i;
    }
    for (int i=2; i<=n; i+=2) {
        e += i;
    }

    cout << (e-o) << '\n';
    return 0;
}
