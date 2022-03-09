#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i < 100) cnt += 1;
        else {
            int o = i % 10;
            int t = i % 100 / 10;
            int h = i / 100;
            if (h - t == t - o) cnt += 1;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}