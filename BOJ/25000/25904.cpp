#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int ppl[100], n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> ppl[i];

    int idx = 0;
    while (true) {
        if (ppl[idx] < x) {
            cout << idx + 1 << '\n';
            break;
        }
        if (idx == n - 1) idx = 0;
        else idx += 1;
        x++;
    }
    
    return 0;
}