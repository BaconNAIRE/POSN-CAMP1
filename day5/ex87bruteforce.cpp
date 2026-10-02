#include <bits/stdc++.h>
using namespace std;

string s;
int best = 0;
set<string> answers;


bool isPalindrome(const string& str) {
    int l=0; int r= str.size() - 1;

    while (l < r) {
        if (str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }

    return true;
}

void generate(int i, string& current) {
    if (i == s.size()) {
        if (!isPalindrome(current)) {
            return;
        }

        int length = current.size();

        if (length > best) {
            best = length;
            answers.clear();
        }

        if (length == best) {
            answers.insert(current);
        }

        return;
    }

    //backtracking
    current.push_back(s[i]);
    generate(i+1, current);

    current.pop_back();

    generate(i+1, current);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> s;
    string current = "";
    generate(0, current);

    cout << "Minimum Deletions: " << s.size() - best << '\n';
    cout << "(LPS): " << best << '\n';

    int num=1;

    for (const string& text: answers) {
        cout << '[' << num << "]: " << text << '\n';
    }

    return 0;
}