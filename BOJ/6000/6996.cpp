#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        string w1, w2, t1, t2;
        cin >> w1 >> w2;
        t1 = w1;
        t2 = w2;

        sort(t1.begin(), t1.end());
        sort(t2.begin(), t2.end());

        if (t1 == t2) cout << w1 << " & " << w2 << " are anagrams." << '\n';
        else cout << w1 << " & " << w2 << " are NOT anagrams." << '\n';
    }
    
    return 0;
}