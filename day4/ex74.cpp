#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int pos = str.rfind('@');
    if (pos == string::npos) {
        cout << "Invalid email format." << '\n';
        return 0;
    }
    cout << str.substr(0,pos) << '\n';
    cout << str.substr(pos+1, str.size()) << '\n';
    return 0;
}