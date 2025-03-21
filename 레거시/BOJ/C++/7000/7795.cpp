#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int a[20000], b[20000];

int main() {
    FASTIO;
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort (a, a + n);
        sort (b, b + m);

        int rst = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i] < b[j]) break;
                else if (a[i] > b[j]) rst++;
            }
        }
        cout << rst << '\n';
    }
    
    return 0;
}