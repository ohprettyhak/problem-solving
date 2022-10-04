#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int tree[10000];
        for (int i = 0; i < n; i++) cin >> tree[i];
        sort(tree, tree + n);

        int rst = 0;
        for (int i = 0; i < n - 2; i++) rst = max(rst, tree[i + 2] - tree[i]);

        rst = max({rst, tree[1] - tree[0], tree[n - 1] - tree[n - 2]});
        
        cout << rst << '\n';
    }
    
    return 0;
}