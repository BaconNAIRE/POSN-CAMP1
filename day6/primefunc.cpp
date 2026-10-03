#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) {
        return false;
    }
    for (int i=3; i*i<num; i+=2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    cout << "Enter a number: ";
    int n; cin >> n;
    cout << n << (isPrime(n) ? " is a prime number" : " is not a prime number") << '\n';
    return 0;
}