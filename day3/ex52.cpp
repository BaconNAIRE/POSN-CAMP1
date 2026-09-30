#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,ans=0;
    cin >> n >> k;
    vector<int> treasure;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        treasure.push_back(x);
    }
    
    sort(treasure.begin(), treasure.end(),greater<int>());
    for (int i=0; i<n; ++i) {
        if (treasure[i] <= 0 && i >= k) {
            break;
        }
        ans += treasure[i];
    }

    cout << ans << '\n';
}