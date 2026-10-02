#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i<n; ++i) {
        cin >> nums[i];
    }
    
    for (int i=n-2; i>=0; --i) {
        bool swapped = false;
        for (int j=0; j<=i; ++j) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    int max_dist = nums[n-1]-nums[0];
    int min_dist = max_dist;

    for (int i=n-1; i>0; --i) {
        int dist = nums[i] - nums[i-1];
        if (dist < min_dist) {
            min_dist = dist;
        }
    }

    cout << min_dist << '\n';
    cout << max_dist << '\n';
    return 0;
}