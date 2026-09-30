#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, min=INT_MAX;
    cin >> n;
    int i,scores[n];
    for (i=0; i<n; ++i) {
        cin >> scores[i];
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    cout << min << '\n';
    return 0;
}