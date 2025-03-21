#include <iostream>
#include <tuple>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

pair<int, tuple<int, int, int>> team[1000];
int n, k;

bool compare(const pair<int, tuple<int, int, int>>& a, const pair<int, tuple<int, int, int>>& b) {
    if (get<0>(a.second) == get<0>(b.second)) {
        if (get<1>(a.second) == get<1>(b.second)) {
            if (get<2>(a.second) == get<2>(b.second)) return a.first == k;
            return get<2>(a.second) > get<2>(b.second);
        }
        return get<1>(a.second) > get<1>(b.second);
    }
    return get<0>(a.second) > get<0>(b.second);
}

int main() {
    FASTIO;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> team[i].first >> get<0>(team[i].second) >> get<1>(team[i].second) >> get<2>(team[i].second);
    sort(team, team + n, compare);

    for (int i = 0; i < n; i++) {
        if (team[i].first == k) {
            cout << i + 1 << '\n';
            break;
        }
    }
    
    return 0;
}