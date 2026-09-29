#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=1, m=0;
    cin >> n;
    int array[n];
    for (int i=1; i<=n; ++i) {
        cin >> array[i];
    }
    for (int i=1; i<=n; ++i) {
        if (array[i] < array[i+1]) {
            count++;
        } else {
            m = max(m,count);
            count = 1;
        }
    }

    cout << m << '\n';

    return 0;
}