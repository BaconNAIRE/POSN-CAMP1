#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i=0; i<n; ++i) {
        cin >> str[i];
    }

    sort(str.begin(), str.end(), [&](string a, string b){
        if (a.size() != b.size()) {
            return a.size() > b.size();
        }
        return a > b;
    });

    for (int i=n-1; i>=0; --i) {
        cout << str[i] << '\n';
    }
    return 0;
}