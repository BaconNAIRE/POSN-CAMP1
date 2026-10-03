#include <bits/stdc++.h>
using namespace std;

struct robot {
    int id;
    int points;
    int time;
    int index;
};

int main() {
    int n, target;
    cin >> n >> target;
    vector<robot> robots;
    for (int i=0; i<n; ++i) {
        int id, pnts, time;
        cin >> id >> pnts >> time;
        robot r1 = {id, pnts, time, i};
        robots.push_back(r1);
    }

    sort(robots.begin(), robots.end(), [&](robot r1, robot r2){
        if (r1.points != r2.points) {
            return r1.points > r2.points;
        }
        if (r1.time != r2.time) {
            return r1.time < r2.time;
        }
        return r1.index < r2.index;
    });

    int rank;

    for (int i=0; i<robots.size(); ++i) {
        cout << robots[i].id << ((i == robots.size()-1) ? '\n' : ' ');
        if (robots[i].id == target) {
            rank = i; 
        }
    }
    cout << rank + 1 << '\n';
    return 0;
}