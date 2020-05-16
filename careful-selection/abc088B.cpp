#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int bob_sum = 0;
    int alice_sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            alice_sum += vec.at(i);
            continue;
        }
        bob_sum += vec.at(i);
    }

    cout << alice_sum - bob_sum << endl;
}
