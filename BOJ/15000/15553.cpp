#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    priority_queue<int, vector<int>, greater<int>> gap;
    int ppl[100000], n, k;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> ppl[i];
        if (i > 0) gap.push(ppl[i] - ppl[i - 1]);
    }

    long long rst = 0;
    for (int i = 0; i < n - k; i++) rst += gap.top(), gap.pop();
    cout << rst + k << '\n';
    
    return 0;
}