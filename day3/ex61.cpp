#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, scores=0;
    cin >> n;
    for (int i=0; i<n; ++i) {
        char tp; int num;
        cin >> tp >> num;
        switch (tp) {
            case 'C':
                if (num == 1) {
                    scores += 5;
                } else {
                    scores -= 2;
                }
                break;
            case 'D':
                if (num == 1) {
                    scores += 10;
                }
                break;
            case 'B':
                if (num == 1 && scores >= 20) {
                    scores += 15;
                }
                break;
        }
    }

    cout << scores << '\n';
    return 0;
}