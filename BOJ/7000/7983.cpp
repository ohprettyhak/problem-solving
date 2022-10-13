#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

int main() {
    FASTIO;

    int n;
    pair<int, int> work[1000000];
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> work[i].first >> work[i].second;
    sort(work, work + n, compare);
    
    int tail = work[0].second, gap = 0;
    for (int i = 0; i < n; i++) {
        if (tail > work[i].second) tail = work[i].second;
        gap = max(gap, tail - work[i].second);
        tail -= work[i].first;
    }
    gap = max(gap, tail);
    
    cout << gap << '\n';
    
    return 0;
}