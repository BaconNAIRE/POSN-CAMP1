#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    cin >> n;
    int array[n];

    for (int i=0; i<n; ++i) {
        cin >> array[i];
    }

    for (int i=0; i<n; ++i) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}