#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }

    int mode = a[0];
    int max_freq = 0;

    int curr_freq = 0;
    int curr_val = a[0];

    sort(a.begin(), a.end());

    for (int i=0; i<n; ++i) {
        if (a[i] == curr_val) {
            curr_freq++;
        } else {
            if (curr_freq > max_freq) {
                max_freq = curr_freq;
                mode = curr_val;
            }
            curr_freq = 0;
            curr_val = a[i];
        }
    }

    if (curr_freq > max_freq) {
        max_freq = curr_freq;
        mode = curr_val;
    }

    auto start_index = find(a.begin(),a.end(),mode);
    int mode_count = count(a.begin(),a.end(), mode);

    cout << "Sorted: ";

    for (int i=0; i<a.size()-1; ++i) {
        cout << a[i] << ' ';
    }
    cout << a[a.size()-1] << '\n';

    cout << "Mode: " << mode << '\n';
    cout << "Frequency: " << mode_count << '\n';
    cout << "Start index: " << distance(a.begin(), start_index) << '\n';
    cout << "End index: " << distance(a.begin(), start_index) + mode_count - 1 << '\n';

    return 0;
}