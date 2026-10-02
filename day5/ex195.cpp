#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int l=0; int r=str.size()-1;

    while (l<r) {
        if (str[l] != str[r]) {
            cout << "no" << '\n';
            return 0;
        }
        l++;
        r--;
    }

    cout << "palindrome" << '\n';
    return 0;
}