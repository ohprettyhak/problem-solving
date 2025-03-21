#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int ppl[100000], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> ppl[i];
    sort(ppl, ppl + n);

    long long rst = 0;
    if (ppl[0] != 1) {
        rst += ppl[0] - 1;
        ppl[0] = 1;
    }
    
    for (int i = 1; i < n; i++) {
        if (ppl[i] > ppl[i - 1] + 1) {
            rst += ppl[i] - (ppl[i - 1] + 1);
            ppl[i] = ppl[i - 1] + 1;
        }
    }

    cout << rst << '\n';
    
    return 0;
}