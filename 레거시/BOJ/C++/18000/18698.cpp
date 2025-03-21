#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int rst = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'U') rst++;
            if (s[i] == 'D') break;
        }
        
        cout << rst << '\n';
    }
    
    return 0;
}