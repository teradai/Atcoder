#include <iostream>
using namespace std;

int main() {
    string number;
    cin >> number;

    int counter = 0;
    if (number[0] == '1') {
        ++counter;
    }
    if (number[1] == '1') {
        ++counter;
    }
    if (number[2] == '1') {
        ++counter;
    }

    cout << counter << endl;
}