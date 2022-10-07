#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        if (a + b != b + a) cout << "ERROR" << '\n';
        else cout << "OK" << '\n';
    }
    
    return 0;
}