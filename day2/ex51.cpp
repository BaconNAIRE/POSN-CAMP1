#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m=INT_MIN;
    cin >> n >> k;
    vector<int> array(n);
    vector<int> pSum(n+1, 0);

    for (int i=1; i<=n; ++i) {
        cin >> array[i-1];
        pSum[i] = pSum[i-1] + array[i-1];
    }
    vector<int> pSum_min(k, INT_MAX);
    for (int i=0; i<=n; ++i) {
        int r = i % k;
        if (pSum_min[r] != INT_MAX) {
            m = max(m, pSum[i] - pSum_min[r]); 
        }

        pSum_min[r] = min(pSum[i], pSum_min[r]);
    }

    cout << m << '\n';
    return 0;
}