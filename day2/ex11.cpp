#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    do {
        t += n;
    } while (n--);
    cout << t << '\n';
    return 0;
}