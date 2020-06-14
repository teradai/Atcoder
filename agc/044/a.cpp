#include <bits/stdc++.h>
using namespace std;

vector<int> div_vec = {2, 3, 5};
map<int, int> costMap;

void DFS_cost(int x, map<int, int> memoMap) {
    if (x == 1) {
        memoMap
    }

    for (int target_num : div_vec) {
        if (x % target_num == 0) {
            int x_div = x / 2;
            if (memoMap.find(x_div) == memoMap.end()) {
                return;
            }
            memoMap[x_div] = memoMap[x] + costMap[target_num];
            DFS_cost(x_div, memoMap);
        }
        int x_upper = ceil(x / target_num);
        if (memoMap.find(x_upper) == memoMap.end()) {
            return;
        }
        memoMap[x_upper] =
            memoMap[x] + costMap[target_num] + (x_upper * 2 - x) * costMap[1];
        DFS_cost(x_upper, memoMap);

        int x_lower = floor(x / target_num);
        if (memoMap.find(x_lower) == memoMap.end()) {
            return;
        }
        memoMap[x_lower] =
            memoMap[x] + costMap[target_num] + (x - x_lower * 2) * costMap[1];
        DFS_cost(x_lower, memoMap);
    }
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N >> costMap[2] >> costMap[3] >> costMap[5] >> costMap[1];
        map<int, int> memoMap;
        DFS_cost(N, memoMap);
    }
}