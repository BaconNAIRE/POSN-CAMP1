#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans=INT_MIN;
    cin >> n;
    int array[n];

    for (int i=0; i<n; ++i) {
        cin >> array[i];
        ans=max(ans, array[i]);
    }


    cout << ans << '\n';
    return 0;
}