#include <iostream>
#include <algorithm>
#include <queue>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int height[300000];
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> height[i];
    sort(height, height + n);
    
    if (n <= k) {
        cout << 0 << '\n';
        return 0;
    }

    priority_queue<int> gap;
    for (int i = 0; i < n - 1; i++) gap.push(height[i + 1] - height[i]);
    while (--k) gap.pop();

    long long rst = 0;
    while (!gap.empty()) rst += gap.top(),gap.pop();
    cout << rst << '\n';
     
    return 0;
}