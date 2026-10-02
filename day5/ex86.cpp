#include <bits/stdc++.h>
using namespace std;

int minDel(int l, int r, string &s, vector<vector<int>> &dp) {
    // base case
    if (l >= r) return 0;
    
    if (dp[l][r] != -1) {
        return dp[l][r];
    }

    if (s[l] == s[r]) {
        dp[l][r] = minDel(l+1,r-1,s,dp);
    } else {
        dp[l][r] = 1 + min(minDel(l+1, r, s, dp), minDel(l, r-1, s, dp));
    }

    return dp[l][r];
}

int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    vector<vector<int>> dp(n, vector<int>(n,-1));

    int deletion = minDel(0, n-1, str, dp);
    int lps = n - deletion;

    cout << "Minimum Deletions: " << deletion << '\n';
    cout << "(LPS): " << lps << '\n';

    return 0;
}