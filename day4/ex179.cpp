#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,temp;
    float med;
    cin >> n;
    vector<int> nums;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (int i=nums.size()-2; i>=0; --i) {
        for (int j=0; j<=i; ++j) {
            if (nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    if (nums.size() % 2 == 0) {
        int mid = (nums.size() + 1) / 2;
        med = (nums[mid] + nums[mid-1])/2.0;
    } else {
        med = nums[nums.size()/2];
    }

    cout << "sort: ";
    for (int i=0; i<nums.size()-1; ++i) {
        cout << nums[i] << " ";
    }
    cout << nums.back() << '\n';
    cout << "median: " << fixed << setprecision(1) << med << '\n';
    return 0;
}