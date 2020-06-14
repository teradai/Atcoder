#include <bits/stdc++.h>
using namespace std;

int main() {
    string targetStr;
    cin >> targetStr;

    int counter = 0;
    while (targetStr.size() > counter) {
        if (targetStr[counter] == '?') {
            targetStr[counter] = 'D';
        }
        counter++;
    }

    cout << targetStr << endl;
}