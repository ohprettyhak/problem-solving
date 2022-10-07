#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int t;
    cin >> t;

    while (t--) {
        int n, l1, l2, l3;
        cin >> n >> l1 >> l2 >> l3;

        int score = l1 + l2 + l3;
        cout << n << ' ' << score << ' ';
        if (score >= 55 && l1 >= 11 && l2 >= 8 && l3 >= 12) cout << "PASS" << '\n';
        else cout << "FAIL" << '\n';
    }
    
    return 0;
}