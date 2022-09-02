#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b;
    cin >> a >> b;

    double m = (b - a) / 400;
    printf("%.20f\n", 1 / (1 + pow(10, m)));

    return 0;
}