#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int saro[100000], m, n, l;
    pair<int, int> animal[100000];
    
    cin >> m >> n >> l;
    for (int i = 0; i < m; i++) cin >> saro[i];
    for (int i = 0; i < n; i++) cin >> animal[i].first >> animal[i].second;

    sort(saro, saro + m);

    int rst = 0;
    for (int i = 0; i < n; i++) {
        int x = animal[i].first;
        int y = animal[i].second;
        if (l - y < 0) continue;

        int head = 0, tail = m - 1;
        while (head <= tail) {
            int mid = (head + tail) / 2;
            long long dif = abs(saro[mid] - x) + y;
            
            if (dif <= l) {
                rst++;
                break;
            }
            if (saro[mid] > (l - y + x)) tail = mid - 1;
            else head = mid + 1;
        }
    }

    cout << rst << '\n';
    
    return 0;
}