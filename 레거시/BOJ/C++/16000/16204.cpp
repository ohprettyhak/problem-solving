#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int n, m, k;
    cin >> n >> m >> k;

    cout << min(m, k) + min(n - m, n - k) << '\n';
    
    return 0;
}