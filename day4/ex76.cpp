#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    string num;
    int count=0; float t=0.0;
    getline(cin, str);

    stringstream ss(str);

    while (ss >> num) {
        count++;
        t += stof(num);
    }
    cout << fixed << setprecision(1) << t << '\n';
    cout << count << '\n';
    if (count == 0) {
        count = 1;
    }
    cout << fixed << setprecision(1) << t / count << '\n';
    return 0;
}