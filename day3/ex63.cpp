#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> contest(3);
    vector<string> names = {"Peanut", "Pete", "Chertam"};
    for (int i=0; i<n; ++i) {
        for (int j=0; j<3; ++j) {
            int x;
            cin >> x;
            contest[j] += x;
        }
    }

    for (int i=0; i<3; ++i) {
        cout << names[i] << ": " << contest[i] << '\n';
    }

    int max_scores = *max_element(contest.begin(), contest.end());
    int winners = count(contest.begin(),contest.end(),max_scores);

    cout << "Winner: ";

    if (winners > 1) {
        for (int i=0; i<3; ++i) {
            if (contest[i] == max_scores) {
                cout << names[i];
            }
            if (i < winners-1) {
                cout << " & ";
            }
        }
        cout << " Score: " << max_scores << '\n';
    } else {
        int index = max_element(contest.begin(), contest.end()) - contest.begin();
        cout << names[index] << " Score: " << max_scores << '\n';
    }

    
    return 0;
}