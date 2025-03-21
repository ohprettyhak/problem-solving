#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int h[10000], n, l;
    
    cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> h[i];
    sort(h, h + n);

    for (int i = 0; i < n; i++) if (h[i] <= l) l += 1;
    cout << l << '\n';
    
    return 0;
}