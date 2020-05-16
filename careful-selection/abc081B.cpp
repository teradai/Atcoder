#include <iostream>
using namespace std;
#include <vector>

bool isEvenAll(vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec.at(i) % 2 == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec.at(i);
    }

    int counter = 0;
    while (isEvenAll(vec)) {
        ++counter;
        for (int i = 0; i < vec.size(); ++i) {
            vec.at(i) /= 2;
        }
    }

    cout << counter << endl;
}
