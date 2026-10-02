#include <bits/stdc++.h>
using namespace std;


void isSacredLeapYear(int year) {
    // เติมโค้ดฟังก์ชันตรวจสอบปีอธิกสุรทิน ตรงนี้ !!
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a Sacred Leap Year." << endl;
            } else {
                cout << year << " is a Normal Year." << endl;
            }
        } else {
            cout << year << " is a Sacred Leap Year." << endl;
        }
    } 
    cout << year << " is a Normal Year." << endl;
}
