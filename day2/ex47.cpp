#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int array[n][m];

    for (int i=0; i<n; ++i) {
        int t=INT_MIN;
        for (int j=0; j<m; ++j) {
            cin >> array[i][j];
            t = max(t, array[i][j]);
        }
        if (i == n-1) {
            cout << t;
        } else {
            cout << t << " ";
        }

    }
    return 0;
}