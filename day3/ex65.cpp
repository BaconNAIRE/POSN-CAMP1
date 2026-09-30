#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; float med;
    cin >> n;
    vector<int> nums;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (int i=0; i<n-1; ++i) {
        for (int j=0; j<n-i-1; ++j) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
    int mid = n/2;
    if (n % 2 == 0) {
        med = (nums[mid-1]+nums[mid]) / 2.0;
    } else {
        med = nums[mid];
    }

    cout << "sort: ";
    for (int i=0; i<n-1; ++i) {
        cout << nums[i] << " ";
    }
    cout << nums[n-1] << '\n';
    cout << "median: " << fixed << setprecision(1) << med << '\n';
    return 0;
}