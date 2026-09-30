#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,first=INT_MAX,t=0;
    cin >> n;
    vector<pair<int,int>> submit;
    for (int i=0; i<n; ++i) {
        int x,y;
        cin >> x >> y;
        submit.push_back(make_pair(x,y));
    }

    sort(submit.begin(),submit.end());

    for (auto it=submit.end(); it!=submit.begin();) {
        --it;
        if (first == it->first) {
            continue;
        } else {
            t += it->second;
            first = it->first;
        }
    }
    cout << t << '\n';
    return 0;
}