#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; float t=0;
    cin >> n;
    vector<int> nums;

    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        nums.push_back(x);
        t += x;
    }

    for (int i=0; i<n-1; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    cout << "sorting: ";
    for (int i=0; i<n-1; ++i) {
        cout << nums[i] << " ";
    }
    cout << nums[n-1] << '\n';
    cout << "avg: " << fixed << setprecision(2) << t / n <<  '\n';
    return 0;
}