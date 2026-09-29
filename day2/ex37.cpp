#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, index=-1, m=INT_MIN;
    cin >> n;

    int array[n];

    for (int i=0; i<n; ++i) {
        cin >> array[i];
    }

    for (int i=0; i<n; ++i) {
        if (array[i] > m) {
            m = array[i];
            index = i;
        }
    }

    cout << index << '\n';
    return 0;
}