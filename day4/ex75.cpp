#include <bits/stdc++.h>
using namespace std;

int main() {
    string nums,ans;
    cin >> nums;
    if (nums[0] == '0' && nums.size() == 10) {
        ans = "+66 (" + nums.substr(1,2) + ") " + nums.substr(3,3) + "-" + nums.substr(6,4);
    } else {
        ans = "Invalid Format";
    }

    cout << ans << '\n';
    return 0;
}