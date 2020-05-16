#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int counter = 0;
    for (int i = 0; i < N - 1; ++i) {
        if (vec.at(i) == vec.at(i + 1)) {
            ++counter;
        }
    }

    cout << N - counter << endl;
}