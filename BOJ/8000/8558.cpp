#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int rst = 1;
    for (int i = 2; i <= n; i++) {
        rst *= i;
        rst %= 10;
    }
    cout << rst << "\n";

    return 0;
}