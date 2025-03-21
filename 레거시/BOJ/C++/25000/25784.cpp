#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n[3];
    for (int i = 0; i < 3; i++) cin >> n[i];
    sort(n, n + 3);

    if (n[0] + n[1] == n[2]) cout << 1 << '\n';
    else if (n[0] * n[1] == n[2]) cout << 2 << '\n';
    else cout << 3 << '\n';
    
    return 0;
}