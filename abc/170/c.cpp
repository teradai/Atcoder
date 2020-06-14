#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;
    set<int> num_set;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        num_set.insert(x);
    }

    int min_diff = 1000;
    int min_value = -1;
    for (int i = 0; i <= 101; ++i) {
        if (num_set.find(i) != num_set.end()) {
            continue;
        }
        if (min_diff > abs(X - i)) {
            min_diff = abs(X - i);
            min_value = i;
        }
    }

    cout << min_value << endl;
}