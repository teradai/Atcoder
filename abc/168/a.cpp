#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int target_number = N % 10;

    if (target_number == 3) {
        cout << "bon" << endl;
        return 0;
    }
    if (target_number == 0 || target_number == 1 || target_number == 6 ||
        target_number == 8) {
        cout << "pon" << endl;
        return 0;
    }
    cout << "hon" << endl;
}