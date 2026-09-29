#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    while (num >= 10) {
        num = num / 10;
    }

    cout << num << '\n';
    return 0;
}