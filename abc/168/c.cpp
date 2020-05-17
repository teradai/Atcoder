#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    int H;
    int M;
    cin >> A >> B >> H >> M;

    pair<double, double> hour_hand =
        make_pair(A * cos(M_PI_2 - H * M_PI / 6.0 - M * M_PI / 360.0),
                  A * sin(M_PI_2 - H * M_PI / 6.0 - M * M_PI / 360.0));
    pair<double, double> min_hand = make_pair(
        B * cos(M_PI_2 - M * M_PI / 30.0), B * sin(M_PI_2 - M * M_PI / 30.0));

    double dx = hour_hand.first - min_hand.first;
    double dy = hour_hand.second - min_hand.second;

    cout << fixed << setprecision(10) << sqrt(pow(dx, 2) + pow(dy, 2)) << endl;
}