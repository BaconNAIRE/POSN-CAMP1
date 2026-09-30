#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,  count=0;;
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
                count++;
            }
        }
    }
    cout << count << '\n';

    return 0;
}