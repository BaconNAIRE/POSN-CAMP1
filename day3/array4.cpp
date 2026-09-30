#include <iostream>
using namespace std;

main() {
    int i, j, sum=0, b[3][4];
    for (i=0; i<3; ++i) {
        for (int j=0;j<4;++j) {
            cin >> b[i][j];
            sum += b[i][j];
        }
        cout << "sum : " << sum;
    }
}