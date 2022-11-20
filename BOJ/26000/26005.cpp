#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;

    n = n * n;
    if (n == 1) cout << 0 << '\n';
    else cout << ceil(n / 2.0) << '\n';
    
    return 0;
}