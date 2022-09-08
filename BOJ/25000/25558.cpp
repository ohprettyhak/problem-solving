#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    long long sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;

    int rst = -1;
    long long val = LLONG_MAX;
    
    for (int i = 1; i <= n; i++) {
        int m;
        long long vx, vy, px = sx, py = sy, dist = 0;
        
        cin >> m;

        while (m--) {
            cin >> vx >> vy;
            dist += abs(px - vx) + abs(py - vy);
            px = vx;
            py = vy;
        }
        
        dist += abs(px - ex) + abs(py - ey);

        if (val > dist) {
            val = dist;
            rst = i;
        }
    }

    cout << rst << '\n';
    
    return 0;
}