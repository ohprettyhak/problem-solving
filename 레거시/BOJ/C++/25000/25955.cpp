#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int level2number(char c) {
    if (c == 'B') return 1;
    if (c == 'S') return 2;
    if (c == 'G') return 3;
    if (c == 'P') return 4;
    return 5;
}

bool compare(const pair<char, int>& a, const pair<char, int>& b) {
    if (level2number(a.first) == level2number(b.first)) return a.second > b.second;
    return level2number(a.first) < level2number(b.first);
}

int main() {
    FASTIO;

    int n;
    pair<char, int> level[1000], dup[1000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> level[i].first >> level[i].second;
        dup[i].first = level[i].first, dup[i].second = level[i].second;
    }
    sort(level, level + n, compare);

    pair<char, int> rst[2];
    bool check = false;
    for (int i = 0; i < n; i++) {
        if (level[i].first != dup[i].first || level[i].second != dup[i].second) {
            if (check) {
                rst[1].first = level[i].first;
                rst[1].second = level[i].second;
                break;
            } else {
                rst[0].first = level[i].first;
                rst[0].second = level[i].second;
                check = true;
            }
        }
    }

    if (check) {
        cout << "KO" << '\n';
        for (int i = 0; i < 2; i++) cout << rst[i].first << rst[i].second << ' ';
    } else cout << "OK" << '\n';
    
    return 0;
}