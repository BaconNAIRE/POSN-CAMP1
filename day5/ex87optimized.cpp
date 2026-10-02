#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool used[1005][1005];

set<string> answers[1005][1005];
string str;

const set<string> emptyMiddle = {""};

const set<string>& LPS(int i, int j) {
    if (i > j) return emptyMiddle;
    if (used[i][j]) {
        return answers[i][j];
    }

    used[i][j] = true;
    set<string>& results = answers[i][j];

    if (i == j) {
        results.insert(string(1, str[i]));
    } else if (str[i] == str[j]) {
        const set<string>& middle = LPS(i+1, j-1);

        for (const string& x : middle) {
            results.insert(string(1, str[i]) + x + str[j]);
        }
    }
    else {
        if (dp[i+1][j] == dp[i][j]) {
            const set<string>& next = LPS(i+1, j);

            results.insert(next.begin(), next.end());
        }
        if (dp[i][j-1] == dp[i][j]) {
            const set<string>& next = LPS(i, j-1);

            results.insert(next.begin(), next.end());
        }
    }

    return results;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    getline(cin, str);

    int n = str.size();

    for (int i=0; i<n; ++i) {
        dp[i][i] = 1;
    }

    for (int len=2; len <=n; ++len) {
        for (int l=0; l+len<=n; ++l) {
            int r = l + len - 1;
            if (str[l] == str[r]) {
                int inner = (len == 2 ? 0 : dp[l+1][r-1]);

                dp[l][r] = inner + 2;
            } else {
                dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
            }
        }
    }

    const set<string>& results = LPS(0, n-1);

    cout << "Minimum Deletions: " << n - dp[0][n-1] << '\n';
    cout << "(LPS): " << dp[0][n-1] << '\n';

    int num = 1;

    for (const string& x : results) {
        cout << '[' << num++ << "]: " << x << '\n';
    }

    return 0;
}