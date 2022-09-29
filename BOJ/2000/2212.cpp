#include <iostream>
#include <algorithm>
#include <queue>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int sensor[10000];
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> sensor[i];
    sort(sensor, sensor + n);
    
    if (n <= k) {
        cout << 0 << '\n';
        return 0;
    }

    priority_queue<int> dist;
    for (int i = 0; i < n - 1; i++) dist.push(sensor[i + 1] - sensor[i]);
    while (--k) dist.pop();

    long long rst = 0;
    while (!dist.empty()) rst += dist.top(),dist.pop();
    cout << rst << '\n';
    
    return 0;
}