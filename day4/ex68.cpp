#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> model;
    set<int> found;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        model.push_back(x);
        found.insert(x);
    }
    for (auto x: found) {
        int x_count = count(model.begin(),model.end(),x);
        if (x_count >= k) {
            cout << x << ": ";
            for (int i=0; i<x_count; ++i) {
                cout << '*';
            }
            cout << '\n';
        }
    }

    return 0;
}