#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool is_prime = true;
    int i=2;

    do {
        if (i*i > n) {
            break;
        }
        if (n % i == 0) {
            is_prime = false;
            break;
        }
        i++;
    } while (i*i<=n);

    if (is_prime) {
        cout << "y" << '\n';
    } else {
        cout << "n" <<'\n';
    }
    return 0;
}