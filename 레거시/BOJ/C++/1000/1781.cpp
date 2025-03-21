#include <iostream>
#include <queue>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    pair<int, long long> problem[200000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> problem[i].first >> problem[i].second;
    sort(problem, problem + n);

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        int dead = problem[i].first;
        pq.push(problem[i].second);
        while (dead < pq.size()) pq.pop();
    }

    long long rst = 0;
    while (!pq.empty()) {
        rst += pq.top();
        pq.pop();
    }

    cout << rst << '\n';
    
    return 0;
}