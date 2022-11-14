#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int toc[1000000], rst[1000000], n;
    
    cin >> n >> toc[0];

    if (toc[0] != 1) {
        cout << -1 << '\n';
        return 0;
    }
    
    for (int i = 1; i < n; i++) {
        cin >> toc[i];

        // toc not correct
        if (toc[i - 1] + 1 < toc[i]) {
            cout << -1 << '\n';
            return 0;
        }
    };

    for (int i = 0; i < n; i++) {
        int size = 0;
        for (int j = i + 1; j < n; j++) {
            if (toc[j] == toc[i] + 1) size += 1;
            if (toc[j] == toc[i]) break;
        }
        rst[i] = size;
    }

    for (int i = 0; i < n; i++) cout << rst[i] << '\n';
    
    return 0;
}