#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b) {
    if (a.second.second == b.second.second) {
        if (a.second.first == b.second.first) return a.first.second > b.first.second;
        return a.second.first > b.second.first;
    }
    return a.second.second > b.second.second;
}

int main() {
    FASTIO;
    
    int n;
    cin >> n;

    vector<pair<pair<string, int>, pair<int, int>>> ppl(n);
    for (int i = 0; i < n; i++) cin >> ppl[i].first.first >> ppl[i].first.second >> ppl[i].second.first >> ppl[i].second.second;
    sort(ppl.begin(), ppl.end(), compare);

    cout << ppl[0].first.first << '\n';
    cout << ppl[n - 1].first.first << '\n';
    
    return 0;
}