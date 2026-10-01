#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    if (str.size() == 0) {
        return 0;
    }
    int pos = str.rfind('%');
    while (pos != string::npos) {
        if (pos + 2 < str.size()) {
            string cmds = str.substr(pos+1, 2);
            char decoded = stoul(cmds, nullptr, 16);
            str.replace(pos,3,string(1,decoded));
        }
        if (pos == 0) break;
        pos = str.rfind('%', pos - 1);
    }
    cout << str << '\n';
    return 0;
}