#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (char a: str) {
        cout << "The ASCII code of " << a << " is: " << int(a) << '\n';
    }
    
    return 0;
}