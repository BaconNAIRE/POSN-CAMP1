#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    int nums[n];

    for (int i=0; i<n; ++i) {
        cin >> nums[i];
        t += nums[i];
    }

    cout << t << '\n';
    return 0;
}