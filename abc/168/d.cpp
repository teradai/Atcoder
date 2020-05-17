#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> vec(M);
    for (int i = 0; i < M; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }

    map<int, vector<int>> root_map;
    for (int i = 0; i < M; i++) {
        root_map[vec[i].first].push_back(vec[i].second);
        root_map[vec[i].second].push_back(vec[i].first);
    }

    queue<int> BFS_room;
    vector<int> room_mark(N + 1);
    BFS_room.push(1);
    while (!BFS_room.empty()) {
        int target_room = BFS_room.front();
        BFS_room.pop();

        for (int i = 0; i < root_map[target_room].size(); ++i) {
            if (room_mark[root_map[target_room][i]] == 0) {
                BFS_room.push(root_map[target_room][i]);
                room_mark[root_map[target_room][i]] = target_room;
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 2; i < N + 1; ++i) {
        cout << room_mark[i] << endl;
    }
}