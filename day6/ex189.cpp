#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> flags;
    vector<int> gaps;
    for (int i=0; i<n; ++i) {
        int x; cin >> x;
        flags.push_back(x);
    }
    sort(flags.begin(), flags.end());

    for (int i=1; i<n; ++i) {
        int diff = flags[i] - flags[i-1];
        gaps.push_back(diff);
    }

    sort(gaps.begin(), gaps.end(), greater<int>());

    int ans = flags[n-1] - flags[0];

    for (int i=0; i<k-1; i++) {
        ans -= gaps[i];
    }

    cout << ans << '\n';
    return 0;
}