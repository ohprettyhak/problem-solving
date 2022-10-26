#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        int score[5];
        for (int i = 0; i < 5; i++) cin >> score[i];
        sort(score, score + 5, greater<>());

        int h, l, sum = 0;
        h = score[1];
        l = score[3];
        for (int i = 1; i < 4; i++) sum += score[i];

        if (h - l >= 4) cout << "KIN" << '\n';
        else cout << sum << '\n';
    }
    
    return 0;
}