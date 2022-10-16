#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    char c;
    int a[20][20], n;
    
    cin >> c >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) a[i][j] = 5;
            else if (a[i][j] == 5) a[i][j] = 2;
        }
    }

    if (c == 'U' || c == 'D') {
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 2 || a[i][j] == 5 || a[i][j] == 1 || a[i][j] == 8) cout << a[i][j] << ' ';
                else cout << '?' << ' ';
            }
            cout << '\n';
        }
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                if (a[i][j] == 2 || a[i][j] == 5 || a[i][j] == 1 || a[i][j] == 8) cout << a[i][j] << ' ';
                else cout << '?' << ' ';
            }
            cout << '\n';
        }
    }
    
    return 0;
}