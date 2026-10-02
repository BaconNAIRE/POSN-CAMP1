#include <bits/stdc++.h>
using namespace std;

int main() {
    // ไว้ก่อน
    int n,r;
    cin >> n >> r;
    vector<pair<int,int>> sites(n);
    for (int i=1; i<=n; ++i) {
        int x,y;
        cin >> x >> y;
        sites[i] = make_pair(x,y);
    }
    return 0;
}