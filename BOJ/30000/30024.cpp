#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> value(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> value[i][j];
        }
    }

    int k;
    cin >> k;

    priority_queue<pair<int, pair<int, int>>> pq; // (value, (x, y))
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                pq.push({value[i][j], {i, j}}); // insert outside value
                visited[i][j] = true;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y, val;
        val = pq.top().first;
        x = pq.top().second.first;
        y = pq.top().second.second;
        pq.pop();
        cout << x + 1 << " " << y + 1 << "\n";

        for (int j = 0; j < 4; j++) {
            int nx = x + dx[j];
            int ny = y + dy[j];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
            pq.push({value[nx][ny], {nx, ny}});
            visited[nx][ny] = true;
        }
    }

    return 0;
}