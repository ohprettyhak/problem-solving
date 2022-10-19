#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int a[10000], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<>());
    
    long long r1 = -1, r2 = -1, rst = 0;
    for (int i = 0; i < n - 1; i++) {
        if (r1 == -1) {
            if (a[i] == a[i + 1]) {
                r1 = a[i];
                i++;
            } else if (a[i] - 1 == a[i + 1]) {
                r1 = a[i] - 1;
                i++;
            }
        } else if (r2 == -1) {
            if (a[i] == a[i + 1]) {
                r2 = a[i];
                i++;
            } else if (a[i] - 1 == a[i + 1]) {
                r2 = a[i] - 1;
                i++;
            }
        }
        if (r1 != -1 && r2 != -1) {
            rst += r1 * r2;
            r1 = r2 = -1;
        }
    }

    cout << rst << '\n';
    
    return 0;
}