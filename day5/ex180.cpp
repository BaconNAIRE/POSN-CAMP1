#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; ++i) {
        cin >> array[i];
    }

    for (int i=n-2; i>=0; --i) {
        for (int j=0; j<=i; ++j) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
        for (int i=0; i<n-1; ++i) {
            cout << array[i] << ' ';
        }
        cout << array[n-1] << '\n';;
    }
    return 0;
}