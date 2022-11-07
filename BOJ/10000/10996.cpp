#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;

    for (int i = 1; i <= n * 2; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) cout << '*';
                else cout << ' ';
            } else {
                if (j % 2 == 0) cout << ' ';
                else cout << '*';
            }
        }
        cout << '\n';
    }

    return 0;
}