#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> pSum(r+1,vector<int>(c+1,0));
    for (int i=1; i<=r; ++i) {
        for (int j=1; j<=c; ++j) {
            int val;
            cin >> val;

            pSum[i][j] = val + pSum[i-1][j] + pSum[i][j-1] - pSum[i-1][j-1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << pSum[r2][c2] - pSum[r1-1][c2] - pSum[r2][c1-1] + pSum[r1-1][c1-1] << '\n';
    }
    
    return 0;
}