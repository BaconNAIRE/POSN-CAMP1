#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,r,c,ans=INT_MIN;
    cin >> n >> m >> r >> c;
    vector<vector<int>> pSum(n+1, vector<int>(m+1,0));
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j) {
            int val;
            cin >> val;
            
            pSum[i][j] = val + pSum[i-1][j] + pSum[i][j-1] - pSum[i-1][j-1];
        }
    }

    for (int i=r; i<=n; ++i) {
        for (int j=c; j<=m; ++j) {
            int total = pSum[i][j] - pSum[i-r][j] - pSum[i][j-c] + pSum[i-r][j-c];
            ans = max(ans,total); 
        }
    }
    cout << ans << '\n';
    return 0;
}