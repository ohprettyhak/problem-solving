#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
queue<int> q;

void bfs(int v) {
    q.push(v);
    visited[v] = true;

    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int w = 0; w < graph[v].size(); w++) {
            if (!visited[graph[v][w]]) {
                q.push(graph[v][w]);
                visited[graph[v][w]] = true;
            }
       }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(); cout.tie();
  
    int N, M;
    cin >> N >> M;
    graph.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            bfs(i);
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}