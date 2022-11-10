#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int u1[20], u2[20], n, s, head, tail;
long long rst = 0;
map<int, int> tmp;

void left(int cur, int val) {
    if (cur == head) { tmp[val] += 1; return; }
    left(cur + 1, val);
    left(cur + 1, val + u1[cur]);
}

void right(int cur, int val) {
    if (cur == tail) { rst += tmp[s - val]; return; }
    right(cur + 1, val);
    right(cur + 1, val + u2[cur]);
}

int main() {
    FASTIO;

    cin >> n >> s;
    head = n / 2;
    tail = n - head;
    for (int i = 0; i < head; i++) cin >> u1[i];
    for (int i = 0; i < tail; i++) cin >> u2[i];
    
    left(0, 0);
    right(0, 0);

    if (s == 0) rst -= 1;
    cout << rst << '\n';
    
    return 0;
}