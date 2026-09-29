#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t=0;
    cin >> n;
    for (int i=2; i<=n; i=i+2) {
        t += i;
    }
    cout << t << '\n';
    return 0;
}