#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }

    for (int i = 0; i < N; ++i) {
        if (vec[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
    }

    long long ans = 1;
    for (int i = 0; i < N; ++i) {
        if (ans <= powl(10, 18) / vec[i]) {
            ans *= vec[i];
            continue;
        }
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;
}