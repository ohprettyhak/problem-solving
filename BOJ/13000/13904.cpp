#include <iostream>
#include <queue>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    pair<int, int> assig[10000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> assig[i].first >> assig[i].second;
    sort(assig, assig + n);

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int dead = assig[i].first;
        pq.push(assig[i].second);
        while (dead < pq.size()) pq.pop();
    }

    int rst = 0;
    while (!pq.empty()) {
        rst += pq.top();
        pq.pop();
    }

    cout << rst << '\n';
    
    return 0;
}