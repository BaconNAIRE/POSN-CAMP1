#include <bits/stdc++.h>
using namespace std;


int main() {
    int R,C,t=0;
    cin >> R >> C;
    int grid[R][C];
    for (int i=0; i<R; ++i) {
        for (int j=0; j<C; ++j) {
            cin >> grid[i][j];
            t+=grid[i][j];
        }
    }

    cout << t << '\n';
    return 0;
}