#include <bits/stdc++.h>
using namespace std;

int main() {
    string str,ans;
    getline(cin, str);

    if (str.size() == 0) {
        return 0;
    }

    for (int i=0; i<str.size(); ++i) {
        if (i == 0 && isupper(str[0])) {
            ans += str[0];
            continue;
        }

        if (isupper(str[i]) && str[i-1] == ' ') {
            ans += str[i];
        }
    }

    cout << ans << '\n';
    return 0;
}