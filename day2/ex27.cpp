#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t=0;
    cin >> n;
    if (n==1) {
        return 0;
    }
    vector<bool> vis(n);
    for (int i=2; i<=n; ++i) {
        if (!vis[i]) {
            vis[i] = 0;
            t += i;
            for (int j=i+i; j<=n; j+=i) {
                vis[j] = 1;
            }
        }
    }

    cout << t << '\n';
    return 0;
}