#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    unordered_map<char,int> freq;

    for (char ch: str) {
        ++freq[ch];
    }

    sort(str.begin(), str.end(), [&](char a, char b) {
        if (freq[a] != freq[b]) {
            return freq[a] > freq[b];
        }
        return a < b;
    });

    cout << str << '\n';
    return 0;
}