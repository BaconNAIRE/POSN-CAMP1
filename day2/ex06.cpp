#include <bits/stdc++.h>
using namespace std;

int main() {
    int ptns;
    char grade;

    cin >> ptns;

    if (ptns >= 80) {
        grade = 'A';
    } else if (ptns >= 70) {
        grade = 'B';
    } else if (ptns >= 60) {
        grade = 'C';
    } else if (ptns >= 50) {
        grade = 'D';
    } else {grade = 'F';}

    cout << grade << '\n';
    return 0;
}