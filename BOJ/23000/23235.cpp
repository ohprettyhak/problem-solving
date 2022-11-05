#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n, temp, t = 0;
    while (cin >> n) {
        if (n == 0) break;
        t++;
        
        for (int i = 0; i < n; i++) cin >> temp;
        cout << "Case " << t << ": Sorting... done!" << '\n';
    }
    
    return 0;
}