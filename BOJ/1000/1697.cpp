#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    queue<pair<int, int>> q;
    vector<bool> v(200'000, false);
    cin >> N >> K;

    q.push({N, 0});
    v[N] = true;

    while (!q.empty()) {
        pair<int, int> &front = q.front();
        int n = front.first;
        int time = front.second;
        q.pop();

        if (n == K) {
            cout << time;
            break;
        }

        if (0 <= n - 1 && n - 1 < v.size() && !v[n - 1]) {
            v[n - 1] = true;
            q.push({n - 1, time + 1});
        }

        if (0 <= n + 1 && n + 1 < v.size() && !v[n + 1]) {
            v[n + 1] = true;
            q.push({n + 1, time + 1});
        }

        if (0 <= n + n && n + n < v.size() && !v[n + n]) {
            v[n + n] = true;
            q.push({n + n, time + 1});
        }
    }
}