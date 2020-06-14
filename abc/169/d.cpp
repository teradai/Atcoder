#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;  // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});

    int counter = 0;
    for (pair<long long, long long> res_pair : res) {
        int max_count = 0;
        for (int i = 1; i <= res_pair.second; ++i) {
            if (i * (i + 1) <= 2 * res_pair.second) {
                max_count = i;
            }
        }
        counter += max_count;
    }

    cout << counter << endl;
}