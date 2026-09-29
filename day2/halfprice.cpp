#include <bits/stdc++.h>
using namespace std;

int main() {
    float price; int month;
    cin >> price >> month;

    float t=1;

    while (month--) {
        t *= 0.5;
    }

    price = price * t;

    printf("%.2f", price);
    return 0;
}