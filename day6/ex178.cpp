#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; float t=0.0;
    cin >> n;
    vector<int> nums;
    for (int i=0; i<n; ++i) {
        int x; cin >> x;
        t += x;
        nums.push_back(x);
    }
    for (int i=n-2; i>=0; --i) {
        bool swapped = false;
        for (int j=0; j<=i; ++j) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    cout << "sorting:";
    for (int num: nums) {
        cout << ' ' << num;
    }
    cout << '\n' << "avg: " << fixed << setprecision(2) << t / n << '\n';

    return 0;
}