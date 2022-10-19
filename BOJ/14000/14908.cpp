#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(const pair<int, double>& a, const pair<int, double>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    FASTIO;

    int n;
    cin >> n;

    pair<int, double> shoes[1000];
    for (int i = 0; i < n; i++) {
        double t, s;
        cin >> t >> s;
        shoes[i].first = i + 1;
        shoes[i].second = s / t;
    }
    sort(shoes, shoes + n, compare);

    for (int i = 0; i < n; i++) cout << shoes[i].first << ' ';
    
    
    return 0;
}