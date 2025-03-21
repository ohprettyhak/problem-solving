#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    pair<int, int> wood[200000];
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> wood[i].first >> wood[i].second;
    sort(wood, wood + n);

    // combine connected wood
    vector<pair<int, int>> plate;
    int head = wood[0].first, tail = wood[0].second;
    for (int i = 1; i < n; i++) {
        if (wood[i].first <= tail) {
            if (wood[i].second > tail) tail = wood[i].second;
        } else if (wood[i].first > tail) {
            plate.push_back({head, tail});
            head = wood[i].first;
            tail = wood[i].second;
        }
    }
    plate.push_back({head, tail});

    int idx = 0;
    int end = (2 * plate[0].second) - plate[0].first;
    for (int i = 1; i < plate.size(); i++) {
        if (end >= plate[i].first) {
            pair<int, int> temp = {(2 * plate[i].second) - plate[i].first, 0};
            idx = max(idx, (int) (--(upper_bound(plate.begin(), plate.end(), temp)) - plate.begin()));
            end = max(end, (2 * plate[i].second) - plate[i].first);
        }
    }
    
    cout << plate[idx].second << '\n';
    
    return 0;
}