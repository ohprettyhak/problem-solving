#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    FASTIO;

    int n, d;
    pair<int, int> ppl[100000];
    priority_queue<int, vector<int>, greater<int>> pq;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ppl[i].first >> ppl[i].second;
        if (ppl[i].first > ppl[i].second) swap(ppl[i].first, ppl[i].second);
    }
    cin >> d;
    sort(ppl, ppl + n, compare);

    int rst = 0;
    for (int i = 0; i < n; i++) {    
        if (ppl[i].first >= ppl[i].second - d) pq.push(ppl[i].first);
        while (!pq.empty() && pq.top() < ppl[i].second - d) pq.pop();
        rst = max(rst, (int) pq.size());
    }

    cout << rst << '\n';
    
    return 0;
}