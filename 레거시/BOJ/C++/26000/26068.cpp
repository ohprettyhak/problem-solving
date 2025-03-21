#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        char c1, c2;
        int x;
        cin >> c1 >> c2 >> x;
        if (x < 91) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}