#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int rst = 0;
        for (int i = n; i <= m; i++) {
            string s = to_string(i);
            for (int j = 0; j < s.size(); j++) if (s[j] == '0') rst++;
        }
        cout << rst << '\n';
    }
    
    return 0;
}