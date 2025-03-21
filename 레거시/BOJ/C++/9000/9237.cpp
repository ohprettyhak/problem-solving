#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int tree[1000000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> tree[i];
    sort(tree, tree + n, greater<int>());

    for (int i = 0; i < n; i++) tree[i] += i;
    
    int k = tree[0];
    for (int i = 1; i < n; i++) k = max(k, tree[i]);
    cout << k + 2 << '\n';
    
    return 0;
}