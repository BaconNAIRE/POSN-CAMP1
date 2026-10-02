#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
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
                count++;
                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }
    cout << count << '\n';
    return 0;
}