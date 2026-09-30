#include <iostream>
using namespace std;

main() {
    int a[5] = {6,3,5,8,4}, i,j;
    for (int i=0; i<5;i++) {
        cout << a[i] << " : ";
        for (int j=0; j<a[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}