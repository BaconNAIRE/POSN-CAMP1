#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    vector<int> rowsum(r);
    vector<int> colsum(c);
    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            cin >> grid[i][j];
        }
    }

    for (int i=0; i<r; ++i) {
        int min_val = grid[i][0];
        for (int j=1; j<c; ++j) {
            min_val = min(min_val, grid[i][j]);
        }
        rowsum[i] = min_val;
    }

    for (int i=0; i<c; ++i) {
        int max_val = grid[0][i];
        for (int j=1; j<r; ++j) {
            max_val = max(max_val, grid[j][i]);
        }
        colsum[i] = max_val;
    }

    int count=0;

    for (int i=0; i<r; ++i) {
        for (int j=0; j<c; ++j) {
            if (grid[i][j] == colsum[j] && grid[i][j] == rowsum[i]) {
                count++;
            }
        }
    }

    cout << count << '\n';
    return 0;
}