#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int n, head, tail;
long long u1[15], u2[15], c;
vector<long long> s1, s2;

void left(int cur, long long val) {
    if (cur == head) { s1.push_back(val); return; }
    left(cur + 1, val);
    left(cur + 1, val + u1[cur]);
}

void right(int cur, long long val) {
    if (cur == tail) { s2.push_back(val); return; }
    right(cur + 1, val);
    right(cur + 1, val + u2[cur]);
}

int main() {
    FASTIO;

    cin >> n >> c;
    head = n / 2;
    tail = n - head;
    for (int i = 0; i < head; i++) cin >> u1[i];
    for (int i = 0; i < tail; i++) cin >> u2[i];

    left(0, 0);
    right(0, 0);    

    sort(s2.begin(), s2.end());
    long long rst = 0;
    for (int i = 0; i < s1.size(); i++) 
        rst += upper_bound(s2.begin(), s2.end(), c - s1[i]) - s2.begin();

    cout << rst << '\n';
    
    return 0;
}