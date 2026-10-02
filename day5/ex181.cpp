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
        bool swapped = false;
        for (int j=0; j<=i; ++j) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            cout << "frag" << '\n';
        }
        for (int k=0; k<n-1; ++k) {
            cout << array[k] << ' ';
        }
        cout << array[n-1] << '\n';
        if (swapped == false) {
            break;
        }
    }

    cout << "Sorted: ";
    for (int i=0; i<n-1; ++i) {
            cout << array[i] << ' ';
        }
    cout << array[n-1];
    return 0;
}