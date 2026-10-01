#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<char> found;
    string str;
    getline(cin, str);
    int rmcount=0;

    for (int i=0; i<str.size()/2+1; ++i) {
        if (found.empty()) {
            found.push(str[i]);
        } else if (found.top() == str[str.size()-i]) {
            found.pop();
        } else {
            rmcount++;
            found.pop();
            found.push(str[i]);
        }
    }
    if (!found.empty()) {
        rmcount = rmcount + found.size();
    }

    cout << rmcount << '\n';
    return 0;
}