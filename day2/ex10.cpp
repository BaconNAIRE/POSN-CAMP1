#include <bits/stdc++.h>
using namespace std;

//seive of erathosthenes

int main() {
    int n;
    cin >> n;
    vector<bool> vis(n);

    if (n == 1) {
        cout << "Not Prime";
        return 0;
    }

    for (int i=2; i<=n; ++i) {
        if (vis[i] == 0) {
            vis[i] = 0;
            for (int j=i+i; j<=n; j+=i) {
                vis[j] = 1;
            }
        } 
    }

    (vis[n] == 0) ? cout << "Prime": cout << "Not Prime";
    return 0;
}