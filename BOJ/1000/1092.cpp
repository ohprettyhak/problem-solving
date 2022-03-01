#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> crane(n);
    for (int i = 0; i < n; i++) cin >> crane[i];
    sort(crane.begin(), crane.end(), greater<int>());
    
    cin >> m;
    vector<int> box(m);
    for (int i = 0; i < m; i++) cin >> box[i];
    sort(box.begin(), box.end(), greater<int>());

    if (box[0] > crane[0]) {
        cout << -1 << "\n";
        return 0;
    }
    
    int cnt = 0;
    while (true) {
        cnt += 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < box.size(); j++) {
                if (crane[i] >= box[j]) {
                    box.erase(box.begin() + j);
                    break;
                }
            }
        }
        if (box.size() == 0) break;
    }

    cout << cnt << "\n";    
    return 0;
}