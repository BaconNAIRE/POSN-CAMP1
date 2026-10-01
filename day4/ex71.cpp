#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s.substr(0,s.rfind('.')) << '\n';
    cout << s.substr(s.rfind('.')+1,s.size()) << '\n';
    return 0;
}