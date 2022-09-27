#include <iostream>
#include <queue>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    pair<int, int> univ[10000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> univ[i].second >> univ[i].first;
    sort(univ, univ + n);

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int dead = univ[i].first;
        pq.push(univ[i].second);
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