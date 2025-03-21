#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    priority_queue<int> pq;
    vector<pair<int, int>> gem;
    vector<int> bag;
    int n, k, c;
    
    cin >> n >> k;
    gem.resize(n);
    bag.resize(k);
    for (int i = 0; i < n; i++) cin >> gem[i].first >> gem[i].second;
    for (int i = 0; i < k; i++) cin >> bag[i];
    sort(gem.begin(), gem.end());
    sort(bag.begin(), bag.end());

    long long rst = 0;
    for (int i = 0, j = 0; i < k; i++) {
        while (j < n && gem[j].first <= bag[i]) pq.push(gem[j++].second);
        if (!pq.empty()) {
            rst += pq.top();
            pq.pop();
        }
    }

    cout << rst << '\n';
    
    return 0;
}