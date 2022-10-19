#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int rst = 0, x, y;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n;
            if (n >= rst) {
                rst = n;
                x = i;
                y = j;
            }
        }
    }

    cout << rst << '\n';
    cout << x + 1 << ' ' << y + 1 << '\n';
    
    return 0;
}