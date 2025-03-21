#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) {
    if (a.first.first == b.first.first) return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

int main() {
    FASTIO;
    
    pair<pair<int, int>, int> route[200000];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> route[i].first.first >> route[i].first.second >> route[i].second;
    sort(route, route + n, compare);
    
    vector<pair<pair<int, int>, int>> rst;
    int head = route[0].first.first, tail = route[0].first.second, value = route[0].second;
    
    for (int i = 1; i < n; i++) {
        if (route[i].first.first <= tail) {
            if (route[i].first.second > tail) tail = route[i].first.second;
            if (value > route[i].second) value = route[i].second;
        } else if (route[i].first.first > tail) {
            rst.push_back({{head, tail}, value});
            head = route[i].first.first;
            tail = route[i].first.second;
            value = route[i].second;
        }
    }
    rst.push_back({{head, tail}, value});

    cout << rst.size() << '\n';
    for (int i = 0; i < rst.size(); i++) 
        cout << rst[i].first.first << ' ' << rst[i].first.second << ' ' << rst[i].second << '\n';
    
    return 0;
}