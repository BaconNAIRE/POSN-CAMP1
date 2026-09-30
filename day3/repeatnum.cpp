#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int found[100005] = {0};
    int num[n];

    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        num[i] = x;
        if (found[x]==0) {
            found[x] = 1;
        } else {
            found[x]++;
        }
    }

    for (int i=0;i<n; ++i) {
        int x = num[i];
        if (found[x] > 1) {
            cout << x << " ";
            found[x] = 0;
        }
    }
    return 0;
}