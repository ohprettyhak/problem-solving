#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int w[10], k[10];
    for (int i = 0; i < 10; i++) cin >> w[i];
    for (int i = 0; i < 10; i++) cin >> k[i];
    sort(w, w + 10, greater<>());
    sort(k, k + 10, greater<>());

    int sw, sk;
    sw = w[0] + w[1] + w[2];
    sk = k[0] + k[1] + k[2];

    cout << sw << ' ' << sk << '\n';
    
    return 0;
}