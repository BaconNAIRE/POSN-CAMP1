#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;


    if (str1.size() > str2.size()) {
        cout << "1>2" << '\n';
    } else if (str1.size() < str2.size()) {
        cout << "1<2" << '\n';
    } else {
        cout << "1=2" << '\n';
    }
    return 0;
}