#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(5);
    for (int i = 0; i < 5; ++i) {
        cin >> vec[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (vec[i] == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}