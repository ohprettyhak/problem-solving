#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    queue<int> q;
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) q.push(i);

    cout << "<";
    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        cout << q.front();
        q.pop();
        if (!q.empty()) cout << ", ";
    }
    cout << ">";
    
    return 0;
}