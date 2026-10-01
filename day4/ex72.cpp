#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> found;
    int count = 0;
    string str;
    getline(cin, str);
    for (int i=0; i<=str.size(); ++i) {
        if (found.empty() || found.back() == str[i]) {
            if (found.empty()) {
                found.push_back(str[i]);
            }
            count++;
        } else {
            if (count >= 1) {
                cout << count;
            }
            cout << found.back();
            found.pop_back();
            found.push_back(str[i]);
            count = 1;
        }
    }
    cout << '\n';
    return 0;
}