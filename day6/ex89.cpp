#include <bits/stdc++.h>
using namespace std;

int n,r;
int x[8], y[8];
double dist[8][8];
bool used[8];

vector<int> route, bestRoute;
double bestLength = numeric_limits<double>::infinity();

void searchRoute(int last, double length) {
    if (route.size() == n) {
        if (length < bestLength) {
            bestLength = length;
            bestRoute = route;
        }
        return;
    }

    for (int next = n-1; next >= 0; --next) {
        if (used[next]) continue;

        used[next] = true;
        route.push_back(next);

        searchRoute(next, length + dist[last][next]);

        route.pop_back();
        used[next] = false;
    }
}

int main() {
    cin >> n >> r;
    
    int maxX = 0; int maxY = 0;

    for (int i=0; i<n; ++i) {
        cin >> x[i] >> y[i];
        maxX = max(maxX, x[i]);
        maxY = max(maxY, y[i]);
    }

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            dist[i][j] = sqrt(dx * dx + dy * dy);
        }
    }

    used[0] = true;
    route.push_back(0);
    searchRoute(0, 0.0);

    int bestBomb = 0;
    int bestCount = -1;

    for (int i=0; i<n; ++i) {
        int count = 0;

        for (int j=0; j<n; ++j) {
            long long dx = x[i] - x[j];
            long long dy = y[i] - y[j];

            if (dx * dx + dy * dy <= 1LL * r * r) {
                ++count;
            }
        }

        bool smallerCoordinates = x[i] < x[bestBomb] || (x[i] == x[bestBomb] && y[i] < y[bestBomb]);

        if (count > bestCount || (count == bestCount && smallerCoordinates)) {
            bestCount = count;
            bestBomb = i;
        } 
    }

    vector<vector<int>> grid(maxY + 1, vector<int>(maxX + 1, 0));

    for (int i=0; i<n; ++i) {
        int row = y[i];
        if (maxY > 0 && row == maxY) --row;
        grid[y[i]][x[i]] = 1;
    }

    int bombRow = y[bestBomb];
    if (maxY > 0 && bombRow == maxY) --bombRow;

    grid[bombRow][x[bestBomb]] = 2;

    for (int i=0; i<n; ++i) {
        if (i>0) cout << " -> ";
        cout << bestRoute[i] + 1;
    }

    cout << '\n';
    
    cout << fixed << setprecision(2) << bestLength << '\n';
    cout << '(' << x[bestBomb] << ", " << y[bestBomb] << ")\n";
    cout << bestCount << '\n';

    for (int row=0; row <= maxY; ++row) {
        for (int col=0; col <= maxX; ++col) {
            if (col > 0) cout << ' ';
            cout << grid[row][col];
        }
        cout << '\n';
    }
    return 0;
}