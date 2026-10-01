#include <bits/stdc++.h>
using namespace std;

int main() {
    int num[2]={0};
    int temp;
    cout << "num 1 = ";
    cin >> num[0];
    cout << "num 2 = ";
    cin >> num[1];
    temp = num[1];
    num[1] = num[0];
    num[0] = temp;
    cout << "num 1 = " << num[0] << '\n' << "num 2 = " << num[1] << '\n';
    return 0;
}