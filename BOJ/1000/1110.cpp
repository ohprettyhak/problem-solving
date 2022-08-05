#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, orig;
    cin >> n;

    orig = n;
    int rst = 0;

    while (1) {
        int temp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
        rst ++;
        n = temp;
        if (temp == orig) break;
    }
    cout << rst << '\n';
    
    return 0;
}