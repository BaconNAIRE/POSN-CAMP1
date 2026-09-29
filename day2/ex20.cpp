#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e=0, o=0;
    cin >> n;
    do {
        if (n % 2 == 0) {
            e++;
        } else {
            o++;
        }
        --n;
    } while (n > 0);

    cout << "e: " << e << ",o: " << o << '\n';
    return 0;
}