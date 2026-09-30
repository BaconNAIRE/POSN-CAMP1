#include <iostream>
using namespace std;
main() {
    int i, SIZE = 5;

    int table[SIZE];

    for (i=0; i < SIZE; i++) {
        cin >> table[i];
    }
    for (i=SIZE-1; i>=0; i--) {
        cout << table[i] << endl;
    }
}