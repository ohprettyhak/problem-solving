#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n, m, target, init;
    vector<pair<int, int>> score;

    cin >> n >> m >> target >> init;
    if (target <= init) score.push_back({init, 0});
    else score.push_back({init, 1});

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        
        int sum = score[i - 1].first + a;
        int value = score[i - 1].second;
        
        if (sum >= target) score.push_back({sum, value + 0});
        else score.push_back({sum, value + 1});
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;

        int rst = score[r - 1].second - score[l - 1].second;
        cout << rst << '\n';
    }
    
    return 0;
}