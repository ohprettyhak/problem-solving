#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool isValid(int x, int y, int i, int j) { return !(x == i || x == j || y == i || y == j); }

int main() {
    FASTIO;

    int snow[600], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> snow[i];
    sort(snow, snow + n);

    deque<pair<int, pair<int, int>>> snowman;
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) snowman.push_back({snow[i] + snow[j], {i, j}});
    sort(snowman.begin(), snowman.end());
    
    int rst = INT_MAX;
    while (!snowman.empty()) {
        int size = snowman[0].first;
        int x = snowman[0].second.first;
        int y = snowman[0].second.second;
        snowman.pop_front();
        
        int head = 0, tail = n - 1;
        while (head < tail) {
            int sum = snow[head] + snow[tail];
            if (isValid(x, y, head, tail)) rst = min(rst, abs(size - sum));
            
            if (size > sum) head += 1;
            else tail -= 1;
        }
    }

    cout << rst << '\n';
    
    return 0;
}