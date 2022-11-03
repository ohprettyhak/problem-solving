#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int u[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> u[i];

    // a + b + c = d
    // → a + b = d - c

    vector<int> sum;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) sum.push_back(u[i] + u[j]);
    sort(sum.begin(), sum.end());

    int rst = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int need = u[j] - u[i];
            int idx = lower_bound(sum.begin(), sum.end(), need) - sum.begin();
            if (need == sum[idx]) rst = max(rst, u[j]);
        }
    }

    cout << rst << '\n';   
    
    return 0;
}