#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    FASTIO;

    pair<int, int> room[100000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> room[i].first >> room[i].second;
    
    sort(room, room + n, compare);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(room[0].second);
    
    for (int i = 1; i < n; i++) {
        pq.push(room[i].second);
        if (pq.top() <= room[i].first) pq.pop();
    }

    cout << pq.size() << '\n';
    
    return 0;
}