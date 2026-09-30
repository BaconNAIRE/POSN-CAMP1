#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> image(n, vector<int>(n,0));
    vector<vector<int>> flipped(n, vector<int>(n,0));

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cin >> image[i][j];
            flipped[i][j] = image[i][j]; // 0 rotation
        }
    }

    int q;
    cin >> q;
    q = q / 90;
    for (int i=0; i<q; ++i) {
        for (int j=0; j<n; ++j) {
            for (int k=0; k<n; ++k) {
                flipped[k][n-j-1] = image[j][k];
            }
        }
        image = flipped;
    }
    
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout << flipped[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}