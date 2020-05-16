#include <iostream>
using namespace std;

int ctoi(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return 0;
}

int main() {
    int N;
    int A, B;
    cin >> N >> A >> B;

    int sum_value = 0;
    for (int i = 1; i <= N; ++i) {
        string target = to_string(i);
        int num = 0;
        for (int index = 0; index < target.size(); ++index) {
            num += ctoi(target[index]);
        }
        if (num >= A && num <= B) {
            sum_value += i;
        }
    }

    cout << sum_value << endl;
}