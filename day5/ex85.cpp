#include <bits/stdc++.h>
using namespace std;

int minDel(int i, int j, string &s, vector<vector<int>> &dp) {
    if (i >= j) {return 0;}

    if (dp[i][j] != -1) {return dp[i][j];}

    if (s[i] == s[j]) {
        dp[i][j] = minDel(i+1, j-1, s, dp);
    } else {
        dp[i][j] = 1 + min(minDel(i+1,j,s, dp), minDel(i,j-1,s, dp));
    }

    return dp[i][j];
}

int main() {
    stack<char> found;
    string str;
    getline(cin, str);

    int n = str.length();

    vector<vector<int>> dp(n, vector<int>(n, -1));

    int deletion = minDel(0, n-1, str, dp);
    int palidromelength = n - deletion;

    cout << "Minimum Deletions: " << deletion << '\n';
    cout << "Length of Palindromic: " << palidromelength << '\n';
    return 0;
}