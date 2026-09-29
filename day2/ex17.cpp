#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=1;
    cin >> n;

    do {
        t *= n;
    } while (n-- > 1);

    cout << t << '\n';
    return 0;
}