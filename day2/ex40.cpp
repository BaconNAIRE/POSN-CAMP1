#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    int array[n];

    for (int i=0; i<n; ++i) {
        cin >> array[i];
        t += array[i];
    }


    cout << t << '\n';
    return 0;
}