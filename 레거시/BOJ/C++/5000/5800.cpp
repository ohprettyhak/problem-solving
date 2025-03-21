#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int ppl[50];
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) cin >> ppl[i];
        sort(ppl, ppl + n);

        int gap = -1, high = -1, low = INT_MAX;
        for (int i = 0; i < n; i++) {
            low = min(low, ppl[i]);
            high = max(high, ppl[i]);
            if (i < n - 1) gap = max(gap, abs(ppl[i + 1] - ppl[i]));
        }

        cout << "Class " << i << '\n';
        cout << "Max " << high << ", Min " << low << ", Largest gap " << gap << '\n';
    }
    
    return 0;
}