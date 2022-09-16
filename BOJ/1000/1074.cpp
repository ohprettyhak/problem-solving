#include <iostream>

using namespace std;

int n, r, c;
int rst = 0;

void Z(int y, int x, int size) {
    if (y == r && x == c) {
        cout << rst << '\n';
        return;
    }

    if (r < y + size && r >= y && c < x + size && c >= x) {
        Z(y, x, size / 2);
        Z(y, x + size / 2, size / 2);
        Z(y + size / 2, x, size / 2);
        Z(y + size / 2, x + size / 2, size / 2);
    } else rst += size * size;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> r >> c;
    Z(0, 0, (1 << n));
    
    return 0;
}