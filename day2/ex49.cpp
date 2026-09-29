#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e=0,o=0;
    cin >> n;
    int array[n+1];
    for (int i=1; i<=n; ++i) {
        cin >> array[i];
        if (i % 2 == 0) {
            e += array[i];
        } else {
            o += array[i];
        }
    }
    
    cout << max(o,e) << '\n';
    return 0;
}