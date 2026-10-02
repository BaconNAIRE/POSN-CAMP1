#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0; i<n; ++i) {
        cin >> array[i];
    }
    sort(array, array + sizeof(array)/sizeof(array[0]));
    cout << array[n-1] + array[0] << '\n';
    return 0;
}