#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;

    cout << (int) max(a / b * c, a * b / c) << '\n';
    
    return 0;
}