#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    string S;
    cin >> K >> S;

    if (S.size() <= K) {
        cout << S << endl;
        return 0;
    }

    cout << S.substr(0, K) + "..." << endl;
}