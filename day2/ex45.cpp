#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m=INT_MIN, index=0;
    cin >> n;
    int array[n];
    for (int i=0; i<n; ++i) {
        cin >> array[i];
        if (array[i] > m) {
            m = array[i];
            index = i;
        }
    }

    cout << index << '\n';
    return 0;
}