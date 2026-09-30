#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    int grid[r+1][c+1];

    for (int i=1; i<=r; ++i) {
        for (int j=1; j<=c; ++j) {
            cin >> grid[i][j];
        }
    }

    int q;
    cin >> q;
    for (int i=0; i<q; ++i) {
        int c1,c2,r1,r2,t=0;
        cin >> r1 >> c1 >> r2 >> c2;
        for (int j=r1; j<=r2; ++j) {
            for (int k=c1; k<=c2; ++k) {
                t += grid[j][k];
            }
        }
        cout << t << '\n';
    }
}