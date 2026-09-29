#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k, t=0;
    cin >> n >> k;
    int array[n];
    for (int i=0; i<n; ++i) {
        cin >> array[i];
        if (array[i] > k) {
            t += array[i];
        }
    }

    cout << t << '\n';
    return 0;
}