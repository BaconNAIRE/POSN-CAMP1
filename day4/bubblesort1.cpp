#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {15,34,28,36,11};
    int temp;

    for (int i=3; i>=0; --i) {
        for (int j=0; j<=i; ++j) {
            temp = a[j];
            if (a[j] > a[j+1]) {
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i=0; i<5; ++i) {
        cout << a[i] << '\n';
    }
    return 0;
}