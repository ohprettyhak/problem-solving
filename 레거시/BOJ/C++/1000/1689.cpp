#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    FASTIO;
    
    int n;
    pair<int, int> line[1000000];
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> line[i].first >> line[i].second;
    sort(line, line + n, compare);

    int rst = 1;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(line[0].second);
    
    for (int i = 1; i < n; i++) {
        int s = line[i].first;
        int e = line[i].second;

        while (!pq.empty() && pq.top() <= s) pq.pop();
        pq.push(e);
        rst = max(rst, (int) pq.size());
    }

    cout << rst << '\n';
    
    return 0;
}