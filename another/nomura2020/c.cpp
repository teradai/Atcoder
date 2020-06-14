#include <bits/stdc++.h>
using namespace std;

bool checker(vector<int> vec, int N) {
    if (N == 0) {
        return false;
    }

    if (vec[0] == 1 || vec[0] == 2) {
        return N == 1;
    }

    for (int i = 1; i < N + 1; ++i) {
        if (vec[i] < pow(2, i)) {
            continue;
        }
        if (vec[i] == pow(2, i)) {
            return i == N - 1;
        }
        return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> a(N + 1);
    for (int i = 0; i < N + 1; ++i) {
        cin >> a[i];
    }

    if (!checker(a, N)) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> b;
    b.push_back(1 - a[0]);
    for (int i = 1; i < N + 1; ++i) {
        int b_num =
            min(accumulate(a.begin() + i + 1, a.end(), 0), 2 * b[i - 1] - a[i]);
        if (b[i - 1] - a[i] > b_num) {
            cout << -1 << endl;
            return 0;
        }
        b.push_back(b_num);
    }

    cout << accumulate(a.begin(), a.end(), 0) +
                accumulate(b.begin(), b.end(), 0)
         << endl;
}