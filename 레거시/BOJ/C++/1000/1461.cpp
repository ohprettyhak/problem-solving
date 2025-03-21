#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    priority_queue<int> up, down;
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) up.push(x);
        else down.push(-1 * x);
    }

    int rst = 0;
    if (!up.empty() && !down.empty()) {
        if (up.top() > down.top()) {
            rst += up.top();
            for (int i = 0; i < m; i++) if (!up.empty()) up.pop();
        } else {
            rst += down.top();
            for (int i = 0; i < m; i++) if (!down.empty()) down.pop();
        }
    }

    while (!up.empty()) {
        if (rst == 0) rst += up.top();
        else rst += up.top() * 2;
        for (int i = 0; i < m; i++) if (!up.empty()) up.pop();
    }
    while (!down.empty()) {
        if (rst == 0) rst += down.top();
        else rst += down.top() * 2;
        for (int i = 0; i < m; i++) if (!down.empty()) down.pop();
    }

    cout << rst << '\n';
    
    return 0;
}