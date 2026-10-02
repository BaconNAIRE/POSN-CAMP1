#include <bits/stdc++.h>
using namespace std;

int calc(int basepow, int id) {
    int odd = 0, temp=basepow;
    while (temp >= 1) {
        if ((temp % 10) % 2 != 0) {
            odd+=(temp % 10);
        }

        temp = temp / 10;
    }
    switch (id) {
        case 1:
            return (basepow * 2) + odd;
        case 2:
            return (basepow * 3) + (odd * 2);
        case 3:
            return basepow + (odd * 3);
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int basepow; int id;
        cin >> basepow >> id;

        cout << calc(basepow, id) << '\n';
    }

    return 0;
}