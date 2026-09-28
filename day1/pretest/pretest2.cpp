#include <bits/stdc++.h>
using namespace std;

int main() {
    string nums;
    cin >> nums;
    int digits = nums.size();
    digits/=2;
    int i=0;
    

    while (i<=digits-1)
    {
        char temp;
        temp = nums[nums.size()-1-i];
        nums[nums.size()-1-i] = nums[i];
        nums[i] = temp;
        i++;
    }
    
    for (char num: nums) {
        cout << num;
    }

    cout << '\n';
    return 0;
}