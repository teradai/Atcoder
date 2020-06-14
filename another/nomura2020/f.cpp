#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a{1, 2, 3, 4, 5};

    int sum = min(accumulate(a.begin() + 1, a.end() - 1, 0), 0);

    cout << sum << endl;
}