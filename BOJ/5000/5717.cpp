#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    while (true) {
        int m, f;
        cin >> m >> f;
        
        if (m == 0 && f == 0) break;
        cout << m + f << '\n';
    }
    
    return 0;
}