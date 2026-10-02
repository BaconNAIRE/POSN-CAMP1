#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i<n; ++i) {
        cin >> nums[i];
    }
    sort(nums, nums + sizeof(nums)/sizeof(nums[0]));
    int c = nums[n-1];
    int b = nums[n-2];
    int a = nums[n-3];

    for (int i=0; i<n-1; ++i) {
        cout << nums[i] << ' ';
    }
    cout << nums[n-1] << '\n';

    (c*c == a*a + b*b) ? cout << "YES" : cout << "NO";
    cout << '\n';
    return 0;
}