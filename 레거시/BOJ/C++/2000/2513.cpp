#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int getDistance(deque<pair<int, int>>& ary, int k, int s) {
    int rst = 0;
    while (!ary.empty()) {
        rst += abs(ary[0].first - s) * 2;
        
        if (ary[0].second > k) {
            ary[0].second -= k;
            continue;
        }
        
        int remain = ary[0].second - k;
        while (remain != 0 && !ary.empty()) {
            if (remain < 0) {
                ary.pop_front();
                if (ary[0].second - abs(remain) > 0) remain *= -1;
                else remain = ary[0].second - abs(remain);
            } else {
                ary[0].second -= abs(remain);
                break;
            }
        }
        if (remain == 0) ary.pop_front();
    }
    return rst;
}

int main() {
    FASTIO;

    int n, k, s;
    cin >> n >> k >> s;

    deque<pair<int, int>> left, right;
    for (int i = 0; i < n; i++) {
        int pos, cnt;
        cin >> pos >> cnt;
        if (pos < s) left.push_back({pos, cnt});
        else right.push_back({pos, cnt});
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end(), greater<>());

    cout << getDistance(left, k, s) + getDistance(right, k, s) << '\n';
    
    return 0;
}