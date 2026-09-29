#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0, counter=-1;
    do {
        int n;
        cin >> n;
        counter++;
        if (n == -1) {
            break;
        }
        t+=n;
    } while (true);

    cout << t/counter << '\n';
    return 0;
}