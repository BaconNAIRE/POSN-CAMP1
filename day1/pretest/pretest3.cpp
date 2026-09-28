#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long t = 1;
    if (N == 0) {
        cout << t << '\n';
        return 0;
    }
    do
    {
        t *= N;
        N--;
    } while (N>0);
    
    
    cout << t << '\n';
    return 0;
}