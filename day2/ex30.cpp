#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float t=0.0;
    cin >> n;

    for (int i=1; i<=n; ++i) {
        t+=i;
    }

    cout << t/n << '\n';
    return 0;
}