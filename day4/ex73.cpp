#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, badword;
    getline(cin,str);
    cin >> badword;
    int pos = str.rfind(badword);
    while (str.rfind(badword) != string::npos) {
        str.replace(pos,badword.size(),string(badword.size(),'*'));
        pos = str.find(badword);
    }
    cout << str << '\n';
    return 0;
}