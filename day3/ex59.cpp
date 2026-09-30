#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> lt;
    vector<int> pos;
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;
        lt.push_back(x);
    }
    int even=0, odd=0;
    for (int i=0; i<lt.size(); ++i) {
        if (lt[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (lt[i] > 0) {
            pos.push_back(lt[i]);
        }
    }
    vector<int>::iterator maxnum = max_element(lt.begin(), lt.end());
    vector<int>::iterator minnum = min_element(lt.begin(), lt.end());

    cout << even << '\n';
    cout << odd << '\n';
    cout << *maxnum << '\n';
    cout << *minnum << '\n';
    if (pos.empty() == 1) {
        cout << "NO POSITIVE";
    } else {
        for (int i=0; i<pos.size(); ++i) {
            if (i == pos.size()-1) {
                cout << pos[i];
                break;
            }
            cout << pos[i] << " ";
        }
    }

    return 0;
}