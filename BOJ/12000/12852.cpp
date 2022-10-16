#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int x;
    cin >> x;

    int a[1000000] = {0, }, pre[1000000] = {0, };

    for (int i = 2; i <= x; i++) {
        a[i] = a[i - 1] + 1;
        pre[i] = i - 1;
        
        if (i % 3 == 0 && a[i / 3] < a[i]) {
            a[i] = a[i / 3] + 1;
            pre[i] = i / 3;
        }
        if (i % 2 == 0 && a[i / 2] < a[i]) {
            a[i] = a[i / 2] + 1;
            pre[i] = i / 2;
        }
    }
    
    cout << a[x] << '\n';
    while (x != 0) cout << x << " ", x = pre[x];
    
    return 0;
}