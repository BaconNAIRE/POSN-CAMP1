#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    cin >> n;
    do {
        n /= 2;
        ++count;
    } while (n > 1);

    cout <<  count << '\n';
    return 0;
}