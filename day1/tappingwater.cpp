#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int l = 0,r=N-1;
    int a[N];

    int t=0;

    for (int i=0; i<N; ++i) {
        cin >> a[i];
    }

    int lMax=0; int rMax=0;

    // two pointers
    while (l < r) {
        if (a[l] <= a[r]) {
            if (lMax < a[l]) {
                lMax = a[l];
            } else {
                t += lMax - a[l];
            }
            l++;
        } else {
            if (rMax < a[r]) {
                rMax = a[r];
            } else {
                t += rMax - a[r];
            }
            r--;
        }
    }

    cout << t << '\n';


    return 0;
}