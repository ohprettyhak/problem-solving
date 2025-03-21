#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n, m;
    cin >> n >> m;

    priority_queue<int> device;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        device.push(x);
    }
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        if (pq.size() < m) {
            pq.push(device.top());
            device.pop();
        }
        else {
            int s = pq.top();
            int d = device.top();
            pq.pop(), device.pop();
            pq.push(s + d);
        }
    }

    int rst = 0;
    while (!pq.empty()) rst = max(rst, pq.top()), pq.pop();
    cout << rst << '\n';
    
    return 0;
}