#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> uniquedigits;
    vector<int> nums;
    string str;
    getline(cin, str);
    int t=0, product=1;
    for (char ch: str) {
        if (isdigit(ch)) {
            t += ch - '0';
            product *= ch - '0';
            
            if (find(uniquedigits.begin(), uniquedigits.end(), ch-'0') == uniquedigits.end()) {
                uniquedigits.push_back(ch-'0');
            }

            nums.push_back(ch-'0');
        }
    }
    if (uniquedigits.empty()) {
        cout << "No digits found in the input." << '\n';
        return 0;
    }
    cout << "Sum of digits: " << t << '\n';
    cout << "Product of digits: " << product << '\n';
    cout << "Number of unique digits: " << uniquedigits.size() << '\n';
    cout << "Frequency of each digit:" << '\n';
    
    for (auto it=uniquedigits.begin(); it != uniquedigits.end();) {
        cout << "Digit " << *it << ": " << count(nums.begin(),nums.end(),*it) << " times" << '\n';
        ++it;
    }
    
    return 0;
}