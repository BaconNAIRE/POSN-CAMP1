#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m, t=0;
    cin >> n >> m;
    int array[n][m];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> array[i][j];
            t += array[i][j];
        }
    }

    cout << t << '\n';
    return 0;
}