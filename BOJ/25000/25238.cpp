#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b;
    cin >> a >> b;

    if (a * (100 - b) / 100 >= 100) cout << 0 << '\n';
    else cout << 1 << '\n';
    
    return 0;
}