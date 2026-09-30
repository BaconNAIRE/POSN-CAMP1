#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0, sum=0;
    cin >> n;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        if (x < 10 || x > 100) {
            ++count;
        } else {
            sum += x;
        }
    }

    cout << count << " " << sum << '\n';
    return 0;
}