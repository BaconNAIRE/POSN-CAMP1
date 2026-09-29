#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int k = 0;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << a << '\n';
    return 0;
}