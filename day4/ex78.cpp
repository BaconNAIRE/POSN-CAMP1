#include <bits/stdc++.h>
using namespace std;

int daysInMonth(int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return 28;
    } 
}

int main() {
    string date,ans;
    getline(cin, date);

    if (date.size() == 0) {
        return 0;
    }

    string year = date.substr(0,4);
    string month = date.substr(5,2);
    string day = date.substr(8,2);


    if (date.size() != 10 || date[4] != '-' || date[7] != '-' || month.size() != 2 || day.size() != 2 || year.size() != 4) {
        cout << "Invalid date." << '\n';
        return 0;
    }

    if (stoi(month) < 1 || stoi(month) > 12) {
        cout << "Invalid month." << '\n';
        return 0;
    } 
    if (stoi(day) < 1 || stoi(day) > daysInMonth(stoi(month))) {
        cout << "Invalid Day." << '\n';
        return 0;
    }

    ans = day + '/' + month + '/' + year;
    cout << ans << '\n';
    return 0;
}