#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int l[1000000];
    int x, n;

    while (1) {
        cin >> x >> n;
        if (cin.eof()) break;
        
        for (int i = 0; i < n; i++) cin >> l[i];
        sort(l, l + n);
    
        x *= 10000000;
        int left = 0, right = n - 1, flag = false;
        while (left < right) {
            if (l[left] + l[right] == x) {
                flag = true;
                break;
            } else if (l[left] + l[right] < x) left += 1;
            else right -= 1;
        }
    
        if (flag) cout << "yes " << l[left] << " " << l[right] << '\n';
        else cout << "danger" << '\n';
    }
    
    return 0;
}