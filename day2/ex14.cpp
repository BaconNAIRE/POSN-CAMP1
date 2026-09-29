#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    int left = 0;
    int right = num.size()-1;

    while (left < right) {
        char temp;
        temp = num[left];
        num[left] = num[right];
        num[right] = temp;
        ++left;
        --right;
    }

    cout << num << '\n';
    return 0;
}