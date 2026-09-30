#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3][3];
    int i,j,k, sum=0;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                cin >> a[i][j][k];
                sum += a[i][j][k];
            }
        }
    }
    cout << sum << '\n';
    return 0;
}