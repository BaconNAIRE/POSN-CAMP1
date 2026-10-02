#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    sort(text.begin(), text.end());

    int max_freq = 0; int curr_freq = 0;
    char curr_val = text[0]; char max_val = text[0];

    for (int i=0; i<text.size(); ++i) {
        if (curr_val == text[i]) {
            curr_freq++;
        } else {
            if (curr_freq > max_freq) {
                max_val = curr_val;
                max_freq = curr_freq;
            } else if (curr_freq == max_freq) {
                if (curr_val > max_val) {
                    max_val = curr_val;
                    max_freq = curr_freq;
                }
            }
            curr_freq = 0;
            curr_val = text[i];
        }
    }

    cout << max_val << " " << max_freq + 1 << '\n';


    return 0;
}