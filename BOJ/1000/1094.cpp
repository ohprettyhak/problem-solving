#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int rst = 0;
    while (n >= 1) {
        rst += n % 2;
        n /= 2;
    }
    cout << rst << '\n';
    
    return 0;
}