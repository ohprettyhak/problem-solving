#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a < 0) cout << -1 * a * c + d + e * b << '\n';
    else if (a > 0) cout << e * (b-a) << '\n';
    else cout << d + e * b << '\n';
    
    return 0;
}