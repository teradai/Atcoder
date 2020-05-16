#include <bits/stdc++.h>
using namespace std;

bool is_reachable(int dt, int dx, int dy) {
    if (dt < dx + dy) {
        return false;
    }
    if ((dt - dx - dy) % 2 != 0) {
        return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> info(N + 1, vector<int>(3));
    for (int j = 0; j < 3; ++j) {
        info.at(0).at(j) = 0;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> info.at(i).at(j);
        }
    }

    for (int i = 0; i < N; ++i) {
        int dt = info.at(i + 1).at(0) - info.at(i).at(0);
        int dx = abs(info.at(i + 1).at(1) - info.at(i).at(1));
        int dy = abs(info.at(i + 1).at(2) - info.at(i).at(2));

        if (!(is_reachable(dt, dx, dy))) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}