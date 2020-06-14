#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> A;
    vector<bool> visited(1e6 + 1, true);
    int max_value = -1;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;

        if (A.find(x) != A.end()) {
            visited[x] = false;
            continue;
        }

        A.insert(x);
        if (max_value < x) {
            max_value = x;
        }
    }

    for (int i = 1; i <= max_value; ++i) {
        if (A.find(i) == A.end()) {
            continue;
        }
        for (int j = 2 * i; j <= max_value; j += i) {
            visited[j] = false;
        }
    }

    int count = 0;
    for (int num : A) {
        if (visited[num]) {
            ++count;
        }
    }
    cout << count << endl;
}