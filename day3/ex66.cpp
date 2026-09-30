#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> ltrs;
    for (int i=0; i<n; ++i) {
        char x;
        cin >> x;
        ltrs.push_back(x);
    }
    sort(ltrs.begin(),ltrs.end());
    for (int i=0; i<n; ++i) {
        cout << ltrs[i] << (i == n-1 ? "\n" : " ");
    }
    return 0;
}