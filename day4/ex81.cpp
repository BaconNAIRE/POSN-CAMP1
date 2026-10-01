#include <bits/stdc++.h>
using namespace std;

string toLower(string s) {
    for (char &c: s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string str, word, key, repl, ans="";
    getline(cin, str);
    cin >> key >> repl;
    stringstream ss(str);
    bool first=true;
    sort(key.begin(), key.end());

    while (ss >> word) {
        if (!first) {
            ans += " ";
        }
        first = false;

        if (word.length() == key.length()) {
            string sorted;
            sorted = toLower(word);
            sort(sorted.begin(), sorted.end());
            if (sorted == key) {
                ans += repl;
                continue;
            }
        }
        ans += word;
    }

    cout << ans << '\n';
    return 0;
}