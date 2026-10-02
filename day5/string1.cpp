#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1("Hello World!");
    string str2("POSN SKN");
    str1.append(string(" " + str2),0,9);

    cout << str1 << '\n';
    return 0;
}