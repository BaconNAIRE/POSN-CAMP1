#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    vector<int> nums;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    while (!nums.empty()) {
        t += nums.back();
        nums.pop_back();
    }

    cout << t << '\n';
    return 0;
}