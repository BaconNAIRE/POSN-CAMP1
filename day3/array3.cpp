#include <iostream>
using namespace std;

main() {
    int i, sum=0, n[10];
    for (i=0; i<10; ++i) {
        cout << "Input number ["<<i<<"] ";
        cin >> n[i];
        sum = sum + n[i];
    }
    for (i=0; i<10; ++i) {
        cout << "Number ["<<i<<"] = "<<n[i]<<endl;
    }
    cout << "Sum = " << sum;
}