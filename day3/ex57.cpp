#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; ++i) {
        int t=0;
        for (int j=0; j<m; ++j) {
            int x;
            cin >> x;
            t += x;
        }
        cout << t << '\n';
    }
    return 0;
}