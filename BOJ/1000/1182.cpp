#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int u[20], n, s;
int rst = 0;

void solution(int cur, int val) {
    if (cur == n) return;
    if (val + u[cur] == s) rst += 1;
    
    solution(cur + 1, val);
    solution(cur + 1, val + u[cur]);
}

int main() {
    FASTIO;

    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> u[i];
    
    solution(0, 0);
    cout << rst << '\n';
    
    return 0;
}