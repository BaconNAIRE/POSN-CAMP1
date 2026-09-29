#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0, count=0;
    cin >> n;

    int array[n];

    for (int i=0; i<n; ++i) {
        cin >> array[i];
        t += array[i];
    }

    int avg = t / n;

    for (int i=0; i<n; ++i) {
        if (array[i] > avg) {
            count++;
        }
    }
    cout << count << '\n';
    
    return 0;
}