#include <bits/stdc++.h>
using namespace std;

int main() {
    int price, paid;
    cin >> price >> paid;

    int diff = paid - price;

    if (diff == 0) {
        cout << "no change" << '\n';
        return 0;
    }

    if (diff < 0) {
        cout << "no money" << '\n';
        return 0;
    }

    if (diff / 1000 > 0) {
        cout << "1000 = " << diff / 1000 << '\n';
        diff %= 1000;
    } if (diff / 500 > 0) {
        cout << "500 = " << diff / 500 << '\n';
        diff %= 500;
    } if (diff / 100 > 0) {
        cout << "100 = " << diff / 100 << '\n';
        diff %= 100;
    } if (diff / 50 > 0) {
        cout << "50 = " << diff / 50 << '\n';
        diff %= 50;
    } if (diff / 20 > 0) {
        cout << "20 = " << diff / 20 << '\n';
        diff %= 20;
    } if (diff > 0) {
        cout << "coin = " << diff << '\n';
    }

    return 0;
}