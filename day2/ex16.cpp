#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;

    do {
        t += n;
    } while (n-- > 1);

    cout << t << '\n';
    return 0;
}