#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,lower="";
    getline(cin, str);

    for (char c : str) {
        if (isalnum(c)) {
            lower += tolower(c);
        }
    }
    if (lower.empty()) {
        cout << "NO" << '\n';
        return 0;
    }
    string rev = lower;
   reverse(rev.begin(), rev.end());


    (lower==rev) ? cout << "YES" : cout << "NO" ;
    cout << '\n';
    return 0;
}