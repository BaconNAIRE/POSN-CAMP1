#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    vector<int> pnts;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        pnts.push_back(x);
    }
    int max_count=1;
    sort(pnts.begin(), pnts.end());
    for (int i=pnts.size()-1; i>0; --i) {
        for (int j=i-1; j>=0; --j) {
            if (pnts[i]-pnts[j] <= d) {
                max_count = max(max_count, i-j+1);
            }
        }
    }
    cout << max_count << '\n';
    return 0;
}